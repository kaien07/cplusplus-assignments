/*
 * Assignment 1: Marriage Pact
 * Created by Haven Whitney with modifications by Fabio Ibanez & Jacob Roberts-Baca.
 *
 * Welcome to Assignment 1! Please complete each STUDENT TODO
 * in this file. You do not need to modify any other files.
 *
 */

#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>

/**
 * Takes in a file name and returns a vector containing all of the applicant names as a vector.
 *
 * @param filename  The name of the file to read.
 *                  Each line of the file will be a single applicant's name.
 * @returns         A vector of all applicant names read from the file.
 *
 * @remark Feel free to change the return type of this function (and the function
 * below it) to use a `std::unordered_set` instead. If you do so, make sure
 * to also change the corresponding functions in `utils.h`.
 */
std::vector<std::string> get_applicants(std::string filename) {
  // STUDENT TODO: Implement this function.
}

/**
 * Takes in a set of student names by reference and returns a queue of names
 * that match the given student name.
 *
 * @param name      The returned queue of names should have the same initials as this name.
 * @param students  The set of student names.
 * @return          A vector containing pointers to each matching name.
 */
std::vector<std::string> find_matches(std::string name, std::vector<std::string>& students) {
  // STUDENT TODO: Implement this function.
}

/**
 * Takes in a queue of pointers to possible matches and determines the one true match!
 *
 * You can implement this function however you'd like, but try to do something a bit
 * more complicated than a simple `pop()`.
 *
 * @param matches The vector of possible matches.
 * @return        Your magical one true love.
 *                Will return "NO MATCHES FOUND." if `matches` is empty.
 */
std::string get_match(std::vector<std::string>& matches) {
  // STUDENT TODO: Implement this function.
}

/* #### Please don't remove this line! #### */
#include "run.hpp"
