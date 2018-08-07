//
// Created by Юрий Быковцев on 29.07.2018.
//

#ifndef BFS_MAIN_H
#define BFS_MAIN_H

#define MAX_DIGITS 256
#define TRUE 1
#define FALSE 0

unsigned char input_check(unsigned char*, unsigned char*);
void adjacency_matrix_builder(unsigned char, unsigned char*);
void BFS(unsigned char*,unsigned char*,unsigned char,unsigned char*);
void add_to_queue(unsigned char*, unsigned char , unsigned char);
unsigned char is_queue_empty(unsigned char*, unsigned char);
unsigned char get_from_queue(unsigned char*, unsigned char);
unsigned char is_node_visited(unsigned char*, unsigned char, unsigned char);

#endif //BFS_MAIN_H
