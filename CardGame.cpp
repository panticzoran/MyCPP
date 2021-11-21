#include <iostream>
#include <string>

using namespace std;

int main() {

	string cardColor, winningCardColor, winningCard, card1, card2, card3;
	int card1Weight, card2Weight, card3Weight;

	//defining the array of cards
	string cardValues[13] = {"A", "K", "Q", "J", "10", "9", "8", "7", "6", "5", "4", "3", "2"};
	//defining the card weights
	int cardWeights[13] = {15, 14, 13, 12, 10, 9, 8, 7, 6, 5, 4, 3, 2};
	
	cout << "Enter the card color: ";
	cin >> cardColor;

	winningCardColor = cardColor;

	cout << "Enter the 3 cards: ";
	cin >> card1 >> card2 >> card3;

	for (int i = 0; i < 13; i++) {
		if (card1[1] == cardValues[i][0]) {card1Weight = cardWeights[i];}
		if (card2[1] == cardValues[i][0]) {card2Weight = cardWeights[i];}
		if (card3[1] == cardValues[i][0]) {card3Weight = cardWeights[i];}
	}

	if (card1[0] != winningCardColor[0] && card2[0] != winningCardColor[0] && card3[0] != winningCardColor[0]) {winningCardColor = card1[0];}


	if (card1[0] == winningCardColor[0] && card1Weight >= card3Weight && card1Weight >= card2Weight) {winningCard = card1;}

	if (card2[0] == winningCardColor[0] && card2Weight >= card3Weight && card2Weight >= card1Weight) {winningCard = card2;}

	if (card3[0] == winningCardColor[0] && card3Weight >= card2Weight && card3Weight >= card1Weight) {winningCard = card3;}


	if (card1[0] == winningCardColor[0] && card2[0] == winningCardColor[0] && card3[0] != winningCardColor[0] && card1Weight >= card2Weight)  {winningCard = card1;}
	else {winningCard = card2;}

	if (card2[0] == winningCardColor[0] && card3[0] == winningCardColor[0] && card1[0] != winningCardColor[0] && card2Weight >= card3Weight)  {winningCard = card2;}
	else {winningCard = card3;}

	if (card3[0] == winningCardColor[0] && card1[0] == winningCardColor[0] && card2[0] != winningCardColor[0] && card3Weight >= card1Weight)  {winningCard = card3;}
	else {winningCard = card1;}

	if (card1[0] == winningCardColor[0] && card2[0] != winningCardColor[0] && card3[0] != winningCardColor[0]) {winningCard = card1;}

	if (card2[0] == winningCardColor[0] && card1[0] != winningCardColor[0] && card3[0] != winningCardColor[0]) {winningCard = card2;}

	if (card3[0] == winningCardColor[0] && card1[0] != winningCardColor[0] && card2[0] != winningCardColor[0]) {winningCard = card3;}



	cout << "The winning card is: " << winningCard << "\n\n";

	/*
	cout << "The winning card colour: " << winningCardColor << "\n";
	cout << "Card1: " << card1 << " " << card1Weight << "\n";
	cout << "Card2: " << card2 << " " << card2Weight << "\n";
	cout << "Card3: " << card3 << " " << card3Weight << "\n"; */

} 