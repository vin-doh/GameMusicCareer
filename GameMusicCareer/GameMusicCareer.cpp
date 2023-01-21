// GameMusicCareer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <string>
#include<string.h>
#include<stdlib.h>
#include <iostream>

using namespace std;

class MusicCareer {
public:
	// Constructor
	MusicCareer(string instrument, string genre);

	// Accessor functions
	string GetInstrument() const;
	string GetGenre() const;
	int GetPopularity() const;

	// Mutator functions
	void SetInstrument(string instrument);
	void SetGenre(string genre);
	void IncreasePopularity();

	// Other member functions
	void Rehearse();
	void Perform();
	void ReleaseAlbum();
	void GoOnTour();

private:
	string instrument_;
	string genre_;
	int popularity_;
};

// Constructor definition
MusicCareer::MusicCareer(string instrument, string genre) :
	instrument_(instrument), genre_(genre), popularity_(1) {}

// Accessor function definitions
string MusicCareer::GetInstrument() const {
	return instrument_;
}

string MusicCareer::GetGenre() const {
	return genre_;
}

int MusicCareer::GetPopularity() const {
	return popularity_;
}

// Mutator function definitions
void MusicCareer::SetInstrument(string instrument) {
	instrument_ = instrument;
}

void MusicCareer::SetGenre(string genre) {
	genre_ = genre;
}

void MusicCareer::IncreasePopularity() {
	++popularity_;
}

// Other member function definitions
void MusicCareer::Rehearse() {
	cout << "Vincent is rehearsing a music with a " << instrument_ << " in " << genre_ << " genre at his sims' home." << endl;
}

void MusicCareer::Perform() {
	// Code to perform music at a venue
	cout << "Vincent is performing a music with a " << instrument_ << " in " << genre_ << " genre at ShowYourTalent Vinmuse Venue." << endl;
	IncreasePopularity();
}

void MusicCareer::ReleaseAlbum() {
	// Code to release an album
	cout << "Vincent released an album in " << genre_ << " genre." << endl;
	IncreasePopularity();
}

void MusicCareer::GoOnTour() {
	// Code to go on tour
	cout << "Vincent is going on GrandMusicShow of " << genre_ << " genre at the Wembley Park" << endl;
	IncreasePopularity();
}

int main() {
	MusicCareer my_career("guitar", "Acoustic blues");
	my_career.Rehearse();
	my_career.Perform();
	my_career.ReleaseAlbum();
	my_career.GoOnTour();

	cout << "Current popularity: " << my_career.GetPopularity() << endl;

	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
