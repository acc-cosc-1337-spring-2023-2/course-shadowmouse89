//add include statements
#include "func.h"





//add function code here
double get_gc_content(const string& dna) 
{
    int gcCount = 0;

    for(int i = 0; i < dna.size(); i++) 
    {
        if(dna[i] == 'G' || dna[i] == 'C')
        {
            gcCount++;
        }
        
    }

    double gcPercent = static_cast<double>(gcCount) / dna.size();
    cout<<gcPercent<<"\n";
    
    return gcPercent;
}

string reverse_string(string dna)
{
    string rDNA;

    for(int i = dna.length() - 1; i >= 0; i--)
    {
        rDNA += dna[i];
    }
    
    return rDNA;
}



   string get_dna_complement(string dna)
{
    string cDNA = reverse_string(dna);

    int cDNA_length = cDNA.length();

	for (int i = 0; i < cDNA_length; i++)
		if (cDNA[i] == 'A')
		{
            cDNA[i] = 'T';
            
        }	
        else if (cDNA[i] == 'T')
		{
            cDNA[i] = 'A';
            
        }	
        else if (cDNA[i] == 'C')
		{
            cDNA[i] = 'G';
            
        }	
        else if (cDNA[i] == 'G')
		{
            cDNA[i] = 'C';
            
        }	

    return cDNA;
}

    
