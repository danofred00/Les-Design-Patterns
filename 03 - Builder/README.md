# Builder Design Pattern

Le pattern Builder, comme son nom l'indique est un pattern de construction (C'est l'un de mes Favories). L'objectif d'utiliser le pattern Builder, C'est d'eviter des millions de constructeurs pour une meme Classe.

Ici, la construction de l'objet se fera par une autre classe que nous allons nous meme creer. Pour te permettre de mieux comprendre ce concept, je vais prendre un petit exemple:

Imaginons que l'on a une classe Personne qui represente une personne, et avec pour attribut son nom, prénom, adresse, numéro de téléphone et email par exemple, ensuite l'on veut offrir la possibilite a l'utilisateur de cette classe de pouvoir construire une Personne avec soit un nom et un prenom, ou bien un nom, prénom et email, etc ...

On voit donc que l'on se retrouve avec plusieurs combinaisons possible, traditionnellement, on aurai pense a faire ceci

    using namespace std;

    class Person
    {
        public:
            Person() = default;
            Person(string firstname, string lastname);
            Person(string firtname, string email);
            .
            .
            .
            Person(string firstname, ..., string email, string tel);
    }

Le pattern Builder, nous permet donc de constroller construction de l'objet en nous evitant l'utilisation de constructeurs infini.

Je t'invites donc a regarder le code dans ce dossier.