// src/ds/hash_table.h
#pragma once
#include <string>

// Узел, как и был
struct HashNode {
    std::string key;
    std::string value;
    HashNode* next;
};

// Теперь это структура, которая хранит в себе все данные
struct HashTable {
    HashNode** table; // Указатель на массив указателей (нашу таблицу)
    int table_size;   // Размер таблицы

    // Конструктор: будет создавать и инициализировать таблицу
    HashTable(int size = 10);

    // Деструктор: будет очищать всю память
    ~HashTable();

    // Все ваши функции станут методами этой структуры
    int hashFunction(const std::string& key);
    void insert(const std::string& key, const std::string& value);
    std::string get(const std::string& key);
    void remove(const std::string& key);
    void printTable();

    // Функции для работы с файлами
    void saveToFile(const std::string& fileName);
    void loadFromFile(const std::string& fileName);

private:
    void freeTable(); // Вспомогательная функция для очистки
};