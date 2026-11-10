/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** levelOrder(struct TreeNode* root, int* returnSize, int** returnColumnSizes) {
     *returnSize = 0;
    *returnColumnSizes = NULL;
    if (root == NULL) {
        return NULL;
    }
    int capacity = 2048; 
    struct TreeNode** queue =
        (struct TreeNode**)malloc(capacity * sizeof(struct TreeNode*));
    int** result = (int**)malloc(capacity * sizeof(int*));
    int* columnSizes = (int*)malloc(capacity * sizeof(int));
    if (queue == NULL || result == NULL || columnSizes == NULL) {
        free(queue);
        free(result);
        free(columnSizes);
        return NULL;
    }
    int front = 0, rear = 0;
    queue[rear++] = root;
    while (front < rear) {
        int levelSize = rear - front;
        int* level = (int*)malloc(levelSize * sizeof(int));
        if (level == NULL) {
            for (int i = 0; i < *returnSize; i++) {
                free(result[i]);
            }
            free(queue);
            free(result);
            free(columnSizes);
            *returnSize = 0;
            return NULL;
        }
        for (int i = 0; i < levelSize; i++) {
            struct TreeNode* node = queue[front++];
            level[i] = node->val;
            if (node->left != NULL) {
                queue[rear++] = node->left;
            }
            if (node->right != NULL) {
                queue[rear++] = node->right;
            }
        }
        result[*returnSize] = level;
        columnSizes[*returnSize] = levelSize;
        (*returnSize)++;
    }
    free(queue);
    *returnColumnSizes = columnSizes;
    return result;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna