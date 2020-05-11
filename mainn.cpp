#include <iostream>
using namespace std;
const int NRIGHE = 2;

struct tratta{
	char destinazione[30];
	int partenza;
	int arrivo;
};
int carica(tratta []);
void stampa(tratta [], int);

int main(){
	tratta orario[NRIGHE];
	int ntratte = carica(orario);
	cout<<"Orario offerto da: Aresta Simone"<<endl<<endl;
	stampa(orario,ntratte);
	return 0;
}


int carica(tratta o[]){
	int n=1;
	int count=0;
	while(n==1){
		cout<<"Inserisci la destinazione: ";
		cin>>o[count].destinazione;
		cout<<"Inserisci orario di partenza n tra 0 e 1439: ";
		cin>>o[count].partenza;
		cout<<"Inserisci orario di arrivo n tra 0 e 1439: ";
		cin>>o[count].arrivo;
		cout<<"Ci sono altre tratte? (0=no/1=si) ";
		cin>>n;
		count++;
	}
	return count;
}
void stampa(tratta o[], int n){
	for (int i=0; i<n; i++)
	{
		cout<<o[i].destinazione<<" "<<o[i].partenza/60<<":"<<o[i].partenza%60<<" "<<o[i].arrivo/60<<":"<<o[i].arrivo%60<<endl;
	}
}
