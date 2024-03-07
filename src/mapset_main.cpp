#include <fstream>
#include "mapset.hpp"

using namespace std;

int main() {
    ifstream stopwords_file("stopwords.txt");
    if (!stopwords_file) {
        cerr << "Could not open stopwords file." << endl;
        return 1;
    }
    const auto stopwords = load_stopwords(stopwords_file);
    stopwords_file.close();

    ifstream document("sample_doc.txt");
    if (!document) {
        cerr << "Could not open sample document file." << endl;
        return 1;
    }
    const auto word_counts = count_words(document, stopwords);
    document.close();

    ofstream output("frequency.txt");
    if (!output) {
        cerr << "Could not open output file." << endl;
        return 1;
    }
    output_word_counts(word_counts, output);
    output.close();

    return 0;
}

