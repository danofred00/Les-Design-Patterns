# Factory Method Pattern

Le pattern Factory method est un pattern que l'on utlise pour la fabrication d'objet sans toute fois directement appeler le constructeur de sa classe.

Dit comme ca, ca parrait un peu abstrait, mais je vais faire de mon mieux pour mieux l'expliquer. 

Alors, imaginons-nous avoir deux classes Dog et Cat qui héritent tous les deux d'une super classe Animal, et l'on souhaites donc vouloir fabriquer un chien ou un chat.

Traditionnellement, notre code ressemblerai à ceci:
    
    Animal john = Dog('John');
    Animal doe  = Cat('Doe');


Maintenant, si l'on veut toute fois le faire sans directement appeler leur(s) constructeur(s), alors une methode factory repond bien a notre besoin. 

En effet, toute methode qui genere quelque chose, est une methode Factory.

Les fichiers sources de ce repertoire reprensentent une implementation concrete de ce pattern.