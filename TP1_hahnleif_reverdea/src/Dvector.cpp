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
    //si le constructeur est vide, alors on simule le constructeur
    //"par défaut" en initialisant ses champs à 0 et NULL.
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
/**
 * @brief La fonction accesseur pour la dimension du vecteur.
 * @return Un entier constant.
 */
int Dvector::size(int catchError) const
{
    return dim;
}

/**
 * @brief La fonction remplit remplit les coordonnées du vecteur selon
 * une loi uniforme sur [0, 1] en utilisant la fonction random() de la
 * bibliothèque "stdlib.h"
 */
void Dvector::fillRandomly(int catchError)
{
    //pour que la méthode renvoie "vraiment" des nouvelles valeurs à 
    //chaque fois qu'on appelle la fonction, il faut initialiser le
    //générateur de nombres aléatoires en semant une graine.
    srand(time(NULL));
    for(int i=0; i<dim; i++)
        pCor[i] = (double)random()/(double)RAND_MAX;
}

/**
 * @brief Le constructeur par copie appelé automatiquement.
 */
Dvector::Dvector(const Dvector & d)
{
    std::cout<<"Appel au constructeur par recopie"<<std::endl;
    //on accède à la valeur d'un champ privé
    dim = d.size();
    if(dim == 0)
        return ;
    pCor = new double[dim];
    for(int i=0; i<dim; i++)
    {
        pCor[i] = d.pCor[i];
    }
}

//implémentation des constructeurs et méthodes pour la question 3
/**
 * @brief Le constructeur "par fichier". Recopie de tous les doubles se
 * trouvant dans le fichier dans le tableau de l'objet à créer.
 * @param str: une chaîne de caractères décrivant le chemin relatif du 
 * fichier.
 */
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
       //on parcourt le fichier pour trouver le nombre d'éléments du fichier
       double tmp;
       while(file>>tmp)
           dim++;
       //on est à la fin du fichier
       file.clear();
       file.seekg(0, std::ios::beg);
   }
   //recopie des valeurs
   pCor = new double[dim];
   for(int i=0; i<dim; i++)
   {
       file>>pCor[i];
   }
   file.close();
}
