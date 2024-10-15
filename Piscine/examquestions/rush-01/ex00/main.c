#include <stdlib.h>
#include <stdio.h>

// Function declarations
void    is_error_or_wrong(void);
void    is_input_correct(int argc, char *argv[], int grid_size);
int     **clues_to_2dclues(int grid_size);
int     **parse_clues(char *argv[], int **clues, int grid_size);
int     **create_grid(int grid_size);
int     **init_grid_univ_rules(int **clues, int **grid, int grid_size);
int     **solve_grid(int **grid, int grid_size, int **clues);
int     check_skyscraper_is_valid(int **clues, int **grid, int grid_size);
int     **print_grid(int **grid, int grid_size);
void    free_grid(int grid_size, int **grid);
void    free_clues(int **clues);

int main(int argc, char *argv[])
{
    // Declare grid and clues as 2D arrays (pointers to pointers)
    int **grid;
    int grid_size;  // Size of the grid (4x4 in this case)
    int **clues;    // Clues for skyscrapers

    grid_size = 4;  // Set the grid size to 4x4
    // Check if the input provided by the user is correct
    is_input_correct(argc, argv, grid_size);
 
    // Convert the linear clue input into a 2D clues array
    clues = clues_to_2dclues(grid_size);
    clues = parse_clues(argv, clues, grid_size);

    // Create and initialize the grid
    grid = create_grid(grid_size);

    // Apply initial universal rules based on clues (e.g., clues of 1 or grid_size)
    grid = init_grid_univ_rules(clues, grid, grid_size);

    // Solve the grid using backtracking
    grid = solve_grid(grid, grid_size, clues);

    // If a valid solution is found, print the grid; otherwise, show an error
    if (grid)
    {
        print_grid(grid, grid_size);
    }
    else
    {
        is_error_or_wrong();
    }

    // Free dynamically allocated memory for clues and grid
    free_clues(clues);
    free_grid(grid_size, grid);
    return (0);
}

// Print an error message when something goes wrong
void is_error_or_wrong(void)
{
    write(1, "Error\n", 6);
}

// Helper function to check if the input string has the correct format
void check_digit_and_length(char *input, int x_length, int *digit_count)
{
    int i = 0;

    while (input[i])
    {
        // Count digits (1-9) and ignore spaces
        if (input[i] >= '1' && input[i] <= '9')
            (*digit_count)++;
        else if (input[i] != ' ')
        {
            // If there are invalid characters, trigger an error
            is_error_or_wrong();
            return;
        }
        i++;

        // Check if the input is too long
        if (i > x_length)
        {
            is_error_or_wrong();
            return;
        }
    }
}

// Function to validate input arguments
void is_input_correct(int argc, char *argv[], int grid_size)
{
    int digit_count = 0;
    int expected_digit_count = grid_size * grid_size;
    int x_length = (grid_size * grid_size) + (grid_size * grid_size - 1);

    // Check if the number of arguments is correct
    if (argc != 2)
    {
        is_error_or_wrong();
        return;
    }

    // Validate the input string format and count the digits
    check_digit_and_length(argv[1], x_length, &digit_count);

    // If the digit count doesn't match, return an error
    if (digit_count != expected_digit_count)
        is_error_or_wrong();
}

// Function to allocate memory for 2D clues array (4 sides of clues)
int **clues_to_2dclues(int grid_size)
{
    int i = 0;
    int **clues;

    // Allocate memory for 4 sides of clues
    clues = (int **)malloc(4 * sizeof(int *));
    if (clues == NULL)
    {
        is_error_or_wrong();
        return (NULL);
    }

    // Allocate memory for each side (grid_size elements per side)
    while (i < 4)
    {
        clues[i] = (int *)malloc(grid_size * sizeof(int));
        if (clues[i] == NULL)
        {
            is_error_or_wrong();
            return (NULL);
        }
        i++;
    }
    return (clues);
}

// Parse the linear input into a 2D clues array
int **parse_clues(char *argv[], int **clues, int grid_size)
{
    int i = 0;
    int clue_index = 0;

    // Iterate over the input string and convert to 2D clues array
    while (argv[1][i] && clue_index < 4 * grid_size)
    {
        if (argv[1][i] >= '1' && argv[1][i] <= '9')
        {
            // Fill clues in the 2D array based on input
            clues[clue_index / grid_size][clue_index % grid_size] = argv[1][i] - '0';
            clue_index++;
            while (argv[1][i] >= '0' && argv[1][i] <= '9')
                i++;
        }
        else
            i++;
    }
    return (clues);
}

// Free memory allocated for the clues array
void free_clues(int **clues)
{
    int i = 0;
    while (i < 4)
    {
        free(clues[i]);
        i++;
    }
    free(clues);
}

// Allocate memory for the grid
int **allocate_grid(int grid_size)
{
    int **grid;
    int row;

    // Allocate memory for rows
    grid = (int **)malloc(grid_size * sizeof(int *));
    if (grid == NULL)
        return (NULL);

    // Allocate memory for each row (columns)
    row = 0;
    while (row < grid_size)
    {
        grid[row] = (int *)malloc(grid_size * sizeof(int));
        if (grid[row] == NULL)
        {
            // If memory allocation fails, free already allocated memory
            while (row > 0)
            {
                row--;
                free(grid[row]);
            }
            free(grid);
            return (NULL);
        }
        row++;
    }
    return (grid);
}

// Initialize the grid with all values set to 0
void initialize_grid(int **grid, int grid_size)
{
    int row, col;

    row = 0;
    while (row < grid_size)
    {
        col = 0;
        while (col < grid_size)
        {
            grid[row][col] = 0;  // Initialize each cell to 0
            col++;
        }
        row++;
    }
}

// Create the grid by allocating memory and initializing it
int **create_grid(int grid_size)
{
    int **grid;

    if (grid_size <= 0)
        return (NULL);

    // Allocate and initialize the grid
    grid = allocate_grid(grid_size);
    if (grid == NULL)
        return (NULL);
    
    initialize_grid(grid, grid_size);
    return (grid);
}

// Free the allocated memory for the grid
void free_grid(int grid_size, int **grid)
{
    int row = 0;
    while (row < grid_size)
    {
        free(grid[row]);
        row++;
    }
    free(grid);
}

// Print the grid to the console
int **print_grid(int **grid, int grid_size)
{
    int row, col;
    char c;

    row = 0;
    while (row < grid_size)
    {
        col = 0;
        while (col < grid_size)
        {
            c = grid[row][col] + '0';  // Convert integer to character
            write(1, &c, 1);  // Print the number
            if (col < grid_size - 1)
                write(1, " ", 1);  // Print space between numbers
            col++;
        }
        write(1, "\n", 1);  // New line at the end of each row
        row++;
    }
    return (grid);
}

// Helper function to handle clues of '1', setting the largest skyscraper
void if_clue_is_one(int **clues, int **grid, int grid_size)
{
    int i = 0;
    while (i < grid_size)
    {
        // If clue is 1, set the largest skyscraper in that position
        if (clues[0][i] == 1)
            grid[0][i] = grid_size;
        if (clues[1][i] == 1)
            grid[grid_size - 1][i] = grid_size;
        if (clues[2][i] == 1)
            grid[i][0] = grid_size;
        if (clues[3][i] == 1)
            grid[i][grid_size - 1] = grid_size;
        i++;
    }
}

// Helper function to handle clues equal to the grid size, setting the smallest skyscraper
void if_clue_is_four(int **clues, int **grid, int grid_size)
{
    int i = 0;
    while (i < grid_size)
    {
        // If clue is equal to grid_size, set smallest skyscraper in order
        if (clues[0][i] == grid_size)
            grid[0][i] = 1;
        if (clues[1][i] == grid_size)
            grid[grid_size - 1][i] = 1;
        if (clues[2][i] == grid_size)
            grid[i][0] = 1;
        if (clues[3][i] == grid_size)
            grid[i][grid_size - 1] = 1;
        i++;
    }
}

// Function to apply general rules based on the clues
int **init_grid_univ_rules(int **clues, int **grid, int grid_size)
{
    // Handle clues of 1 or grid_size (universal rules)
    if_clue_is_one(clues, grid, grid_size);
    if_clue_is_four(clues, grid, grid_size);
    
    // Handle clues where grid size is the maximum (order skyscrapers correctly)
    if_clue_four_ordsize_top(clues, grid, grid_size);
    if_clue_four_ordsize_bottom(clues, grid, grid_size);
    if_clue_four_ordsize_left(clues, grid, grid_size);
    if_clue_four_ordsize_right(clues, grid, grid_size);

    return (grid);
}

// Checks if the grid follows the skyscraper rules (validates visibility clues)
int check_skyscraper_is_valid(int **clues, int **grid, int grid_size)
{
    if (!check_top_bottom(clues, grid, grid_size))
        return (0);
    if (!check_bottom_top(clues, grid, grid_size))
        return (0);
    if (!check_left_right(clues, grid, grid_size))
        return (0);
    if (!check_right_left(clues, grid, grid_size))
        return (0);
    return (1);
}

// Recursive backtracking function to solve the grid
int **solve_grid(int **grid, int grid_size, int **clues)
{
    int row, col, num;

    // Find an empty cell in the grid
    if (!find_empty_case(grid, grid_size, &row, &col))
    {
        // If no empty cell is found, check if the grid is valid
        if (check_skyscraper_is_valid(clues, grid, grid_size))
            return (grid);
        else
            return (NULL);
    }

    // Try numbers from 1 to grid_size in the empty cell
    num = 1;
    while (num <= grid_size)
    {
        if (is_num_used(grid, grid_size, row * grid_size + col, num))
        {
            grid[row][col] = num;  // Place the number
            if (solve_grid(grid, grid_size, clues))  // Recursive call
                return (grid);  // If grid is solved, return it
            grid[row][col] = 0;  // Backtrack if solution is not valid
        }
        num++;
    }
    return (NULL);  // Return NULL if no valid number can be placed
}
// Function to check visibility of skyscrapers from the top of the grid (first row of clues)
int	check_top_bottom(int **clues, int **grid, int grid_size)
{
	int	col;               // Current column index
	int	row;               // Current row index
	int	max_height_seen;   // Tallest skyscraper seen so far in the column
	int	visible_count;     // Count of visible skyscrapers

	col = 0;  // Start from the first column
	while (col < grid_size)
	{
		row = 0;             // Start from the top row
		max_height_seen = 0; // Reset the maximum height seen for this column
		visible_count = 0;   // Reset the count of visible skyscrapers
		while (row < grid_size)
		{
			// If the current skyscraper is taller than any previously seen in this column
			if (grid[row][col] > max_height_seen)
			{
				visible_count++;           // Increment the visible skyscraper count
				max_height_seen = grid[row][col]; // Update the maximum height seen
			}
			row++;  // Move to the next row downwards
		}
		// Check if the visible count from top matches the top clue for this column
		if (visible_count != clues[0][col])
			return (0);  // Return 0 if the clue does not match
		col++;  // Move to the next column
	}
	return (1);  // Return 1 if all clues match for the top view
}

// Function to check visibility of skyscrapers from the bottom of the grid (second row of clues)
int	check_bottom_top(int **clues, int **grid, int grid_size)
{
	int	col;               // Current column index
	int	row;               // Current row index
	int	max_height_seen;   // Tallest skyscraper seen so far in the column
	int	visible_count;     // Count of visible skyscrapers

	col = 0;  // Start from the first column
	while (col < grid_size)
	{
		row = grid_size - 1; // Start from the bottom row
		max_height_seen = 0; // Reset the maximum height seen for this column
		visible_count = 0;   // Reset the count of visible skyscrapers
		while (row >= 0)
		{
			// If the current skyscraper is taller than any previously seen in this column
			if (grid[row][col] > max_height_seen)
			{
				visible_count++;           // Increment the visible skyscraper count
				max_height_seen = grid[row][col]; // Update the maximum height seen
			}
			row--;  // Move to the next row upwards
		}
		// Check if the visible count from bottom matches the bottom clue for this column
		if (visible_count != clues[1][col])
			return (0);  // Return 0 if the clue does not match
		col++;  // Move to the next column
	}
	return (1);  // Return 1 if all clues match for the bottom view
}

// Function to check visibility of skyscrapers from the left of the grid (third row of clues)
int	check_left_right(int **clues, int **grid, int grid_size)
{
	int	row;               // Current row index
	int	col;               // Current column index
	int	max_height_seen;   // Tallest skyscraper seen so far in the row
	int	visible_count;     // Count of visible skyscrapers

	row = 0;  // Start from the first row
	while (row < grid_size)
	{
		col = 0;             // Start from the first column (leftmost)
		max_height_seen = 0; // Reset the maximum height seen for this row
		visible_count = 0;   // Reset the count of visible skyscrapers
		while (col < grid_size)
		{
			// If the current skyscraper is taller than any previously seen in this row
			if (grid[row][col] > max_height_seen)
			{
				visible_count++;           // Increment the visible skyscraper count
				max_height_seen = grid[row][col]; // Update the maximum height seen
			}
			col++;  // Move to the next column to the right
		}
		// Check if the visible count from left matches the left clue for this row
		if (visible_count != clues[2][row])
			return (0);  // Return 0 if the clue does not match
		row++;  // Move to the next row
	}
	return (1);  // Return 1 if all clues match for the left view
}

// Function to check visibility of skyscrapers from the right of the grid (fourth row of clues)
int	check_right_left(int **clues, int **grid, int grid_size)
{
	int	row;               // Current row index
	int	col;               // Current column index
	int	max_height_seen;   // Tallest skyscraper seen so far in the row
	int	visible_count;     // Count of visible skyscrapers

	row = 0;  // Start from the first row
	while (row < grid_size)
	{
		col = grid_size - 1; // Start from the last column (rightmost)
		max_height_seen = 0; // Reset the maximum height seen for this row
		visible_count = 0;   // Reset the count of visible skyscrapers
		while (col >= 0)
		{
			// If the current skyscraper is taller than any previously seen in this row
			if (grid[row][col] > max_height_seen)
			{
				visible_count++;           // Increment the visible skyscraper count
				max_height_seen = grid[row][col]; // Update the maximum height seen
			}
			col--;  // Move to the next column to the left
		}
		// Check if the visible count from right matches the right clue for this row
		if (visible_count != clues[3][row])
			return (0);  // Return 0 if the clue does not match
		row++;  // Move to the next row
	}
	return (1);  // Return 1 if all clues match for the right view
}

// Function to check if the grid is valid by matching skyscraper visibility to all clues
int	check_skyscraper_is_valid(int **clues, int **grid, int grid_size)
{
	// Check the clues for all sides (top, bottom, left, right)
	if (!check_top_bottom(clues, grid, grid_size))
		return (0);  // Return 0 if top-bottom clues are invalid
	if (!check_bottom_top(clues, grid, grid_size))
		return (0);  // Return 0 if bottom-top clues are invalid
	if (!check_left_right(clues, grid, grid_size))
		return (0);  // Return 0 if left-right clues are invalid
	if (!check_right_left(clues, grid, grid_size))
		return (0);  // Return 0 if right-left clues are invalid
	
	// If all checks pass, return 1 indicating the grid is valid
	return (1);
}

