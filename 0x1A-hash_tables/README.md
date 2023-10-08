# 0x1A. C - Hash tables

## Learning Objectives

### General


    What is a hash function
    What makes a good hash function
    What is a hash table, how do they work and how to use them
    What is a collision and what are the main ways of dealing with collisions in the context of a hash table
    What are the advantages and drawbacks of using hash tables
    What are the most common use cases of hash tables

### Data Structures

I use these data structures for this project:

```
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```

| TASK | DESCRIPTION |
| ---------------------| --------------------------|
| 0-hash_table_create.c | function that creates a hash table.|
| 1-djb2.c | hash function implementing the djb2 algorithm.|
| 2-key_index.c | function that gives you the index of a key.|
| 3-hash_table_set.c | function that adds an element to the hash table.|
| 4-hash_table_get.c | function that retrieves a value associated with a key.|
| 5-hash_table_print.c | function that prints a hash table.|
| 6-hash_table_delete.c | function that deletes a hash table.|
| 100-sorted_hash_table.c | In PHP, hash tables are ordered |