#include "Dvector.h"

//implémentation des constructeurs et méthodes pour la question 1
/**
 * @brief Le constructeur par défaut.
 * @param d: entier spécifiant la dimension du vecteur.
 * @param inti: double spécifiant la valeur par défaut des coordonnées.
 */
Dvector::Dvector(int d, double init)
{
    std::cout<<"Appel au constructeur normal"<<std::endl;
    dim = d;
    if(dim==0)
    { 
        pCor = NULL;
        return ;
    }
    pCor = new double[dim];
    for(int i=0; i<dim; i++)
        pCor[i] = init;
}

/**
 * @brief Le destructeur. On désalloue seulement pCor si il a été
 * initialisé.
 */
Dvector::~Dvector()
{
    std::cout<<"Appel au destructeur"<<std::endl;
    if(pCor != NULL)
    {
        delete [] pCor;
    }
}

/**
 * @brief La fonction d'affichage.
 * @param str: Le flux utilisé pour l'affichage, de type std::ostream&.
 * Il s'agit d'une référence.
 */
void Dvector::display(std::ostream& str)
{
    for(int i=0; i<dim; i++)
        str<<pCor[i]<<"\n";
}

//implémentation des constructeurs et méthodes pour la question 2
int Dvector::size()
{
    return dim;
}

void Dvector::fillRandomly()
{
    for(int i=0; i<dim; i++)
        pCor[i] = (double)random()/(double)RAND_MAX;
}

Dvector::Dvector(const Dvector & d)
{
    std::cout<<"Appel au constructeur par recopie"<<std::endl;
    dim = d.dim;
    if(dim == 0)
        return ;
    pCor = new double[dim];
    for(int i=0; i<dim; i++)
    {
        pCor[i] = d.pCor[i];
    }
}
//implémentation des constructeurs et méthodes pour la question 3
Dvector::Dvector(std::string str)
{
    std::cout<<"Appel au constructeur par fichier"<<std::endl;
   //on recupère d'abord la taille du vecteur à créer
   std::fstream file(str.c_str());
   dim = 0;
   //on vérifie si le fichier existe
   if(!file.good())
   {
        dim = 0;
        return ;
   }
   else {
       //on parcourt le fichier
       double tmp;
       while(file>>tmp)
           dim++;
       //on est à la fin du fichier
       file.clear();
       file.seekg(0, std::ios::beg);
   }
   pCor = new double[dim];
   for(int i=0; i<dim; i++)
   {
       file>>pCor[i];
   }
}
