#include <stdio.h>
// Define a structure to store book details
struct Book {
    char title[100];
    char author[100];
    float price;
};
int main() {
    struct Book b[4];
    int most_idx = 0, least_idx = 0;
    // Taking input for 4 books
    for (int i = 0; i < 4; i++) {
        printf("\nEnter details for Book %d\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]", b[i].title); // Reads string with spaces
        printf("Author: ");
        scanf(" %[^\n]", b[i].author);
        printf("Price: ");
        scanf("%f", &b[i].price);
        // Compare prices during input to find most and least expensive
        if (b[i].price > b[most_idx].price) {
            most_idx = i;
        }
        if (b[i].price < b[least_idx].price) {
            least_idx = i;
        }
    }
    // Displaying the results
    printf("\n--- Most Expensive Book ---");
    printf("\nTitle: %s\nAuthor: %s\nPrice: %.2f\n", b[most_idx].title, b[most_idx].author, b[most_idx].price);
    printf("\n--- Least Expensive Book ---");
    printf("\nTitle: %s\nAuthor: %s\nPrice: %.2f\n", b[least_idx].title, b[least_idx].author, b[least_idx].price);
    return 0;
}
