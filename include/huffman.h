#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>


struct node ;

// Crée un nouveau noeud
struct node *create_node(unsigned char symbol, struct node *left, struct node *right);

// Affiche la représentation binaire d'un entier
void print_binary(uint16_t value, int length);

// Affiche la représentation binaire d'un code de huffman
void print_huffman_codes(int bit_lengths[], unsigned char symbols[], int n);

// Construit l'arbre de huffman à partir de la table de huffman
void build_huffman_tree(struct node **root, unsigned char *huff_table) ;

// Décode un bitstream à partir de la table de huffman
unsigned char *decode_bitstream(unsigned char *huff_table, unsigned char *bitstream);

// Teste la fonction decode_bitstream
void test_decode_bitstream(unsigned char bitstream[], unsigned char expected_output);