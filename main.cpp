#include <iostream>
#include <string>

// Simuler un outil "magique" de Rogue
void outil_rogue() {
    std::cout << "Severus Rogue vous salue !" << std::endl;
    std::cout << "Bienvenue dans votre Outil Alchimique Polyvalent Cross-Platform." << std::endl;
    std::cout << "Ce programme prouve que la magie de la compilation fonctionne sur toutes les plateformes (Linux/Windows) !" << std::endl;
}

int main() {
    outil_rogue();
    
    // Pour que la fenêtre ne se ferme pas immédiatement sous Windows
    #ifdef _WIN32
        std::cout << "\nAppuyez sur Entrée pour quitter..." << std::endl;
        std::cin.get();
    #endif
    
    return 0;
}