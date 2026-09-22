#include <iostream>
#include <string>

class Book {
public:
  std::string author;
  int edition;
  int publicationDate;
  std::string isbn;

  Book(std::string author, int edition, int publicationDate, std::string isbn) {
    this->author = author;
    this->edition = edition;
    this->publicationDate = publicationDate;
    this->isbn = isbn;
  }
};

class VoiceRecording {
public:
  std::string speaker;
  int duration;
  int recordingDate;

  VoiceRecording(std::string speaker, int duration, int recordingDate) {
    this->speaker = speaker;
    this->duration = duration;
    this->recordingDate = recordingDate;
  }
};

class TalkingBook : public Book, public VoiceRecording {
public:
  TalkingBook(std::string author, int edition, int publicationDate,
              std::string isbn, std::string speaker, int duration,
              int recordingDate)
      : Book(author, edition, publicationDate, isbn),
        VoiceRecording(speaker, duration, recordingDate) {}

  void display() {
    using namespace std;
    cout << "Author: " << author << "\n";
    cout << "Edition: " << edition << "\n";
    cout << "Publication Date: " << publicationDate << "\n";
    cout << "ISBN: " << isbn << "\n";
    cout << "---------------";
    cout << "Speaker: " << speaker << "\n";
    cout << "Duration: " << duration << "\n";
    cout << "Recording Date: " << recordingDate << "\n";
  }
};

int main() {
  TalkingBook book("Mark Manson", 1, 2016, "0062457713", "Roger Wayne", 317,
                   2016);
  book.display();

  std::cout << "Yudin Karki\n";
  return 0;
}
