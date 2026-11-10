int numIslands(char** grid, int gridSize, int* gridColSize) {
   if (gridSize == 0 || gridColSize[0] == 0) {
        return 0;
    }
    int rows = gridSize;
    int cols = gridColSize[0];
    int total = rows * cols;
    int* stack = (int*)malloc(total * sizeof(int));
    if (stack == NULL) {
        return 0;
    }
    int islands = 0;
    int dr[4] = {-1, 1, 0, 0};
    int dc[4] = {0, 0, -1, 1};
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            if (grid[r][c] != '1') {
                continue;
            }
            islands++;
            int top = 0;
            stack[top++] = r * cols + c;
            grid[r][c] = '0';  
            while (top > 0) {
                int position = stack[--top];
                int currentRow = position / cols;
                int currentCol = position % cols;
                for (int d = 0; d < 4; d++) {
                    int nr = currentRow + dr[d];
                    int nc = currentCol + dc[d];
                    if (nr >= 0 && nr < rows &&
                        nc >= 0 && nc < cols &&
                        grid[nr][nc] == '1') {
                        grid[nr][nc] = '0';
                        stack[top++] = nr * cols + nc;
                    }
                }
            }
        }
    }
    free(stack);
    return islands;   
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna