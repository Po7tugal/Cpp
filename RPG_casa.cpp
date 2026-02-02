#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


string classe;
int stamina;
int hp;
string inimigo;
int hpInimigo;
int escudo;
int escudoInimigo;
int danoAtaque;
string ataques;
string golpe;
int ataqueFinal;
string turno = "jogador";
bool jogoAcabou = false;
int danoAtaqueInimigo;
int ataqueFinalInimigo;

int gerarSeed() {
    srand(time(0));
    return 0;
}

int escolhaClasse(){

    cout << "Bem vindo ao Medieval Conquest!";
    cout << "Voce estaria disposto a encarar as mais horriveis criaturas? Veremos nesse RPG de combate a turnos";
    cout << "\n\nPara Jogar: ";
    cout << "\n- Para escolher a Classe e o Inimigo voce deve escrever exatamente o nome dele, mas para os ataques deve ser o numero";

    //escolher classe

    cout << "\n\nPara comecarmos escolha sua classe entre: \n\n";

    cout << "Barbaro - 120HP - 30SM - 10 Escudo\n";
    cout << "Ataques: \n1 - Machadada (5SM) / (15DMG) / (+3 ATQ) \n2 - Furia de Lotus (8SM) / (20DMG) / (+2 ATQ) \n3 - Poca de sangue (10SM) / (25DMG) / (+1 ATQ) \n4 - Valhalla (15SM) / (35DMG) / (+0 ATQ)\n\n";

    cout << "Guerreiro - 100HP - 50SM - 14 Escudo\n";
    cout << "Ataques: \n1 - Espada em chamas (6SM) / (18DMG) / (+3 ATQ) \n2 - Poder Real (8SM) / (22DMG) / (+2 ATQ) \n3 - Majestade (12SM) / (28DMG) / (+1 ATQ) \n4 - Poder celestial (18SM) / (38DMG) / (+0 ATQ)\n\n";

    cout << "Mago - 60HP - 80SM - 8 Escudo\n";
    cout << "Ataques: \n1 - Bola de Fogo (10SM) / (20DMG) / (+4 ATQ) \n2 - Chuva de raios (15SM) / (25DMG) / (+2 ATQ) \n3 - Incinerar (20SM) / (30DMG) / (+1 ATQ) \n4 - O vazio (25SM) / (40DMG) / (+0 ATQ)\n\n";

    cout << "Necromante - 70HP - 60SM - 9 Escudo\n";
    cout << "Ataques: \n1 - Esqueletos (8SM) / (15DMG) / (+3 ATQ) \n2 - Caes de guerra (12SM) / (20DMG) / (+2 ATQ) \n3 - Servos (15SM) / (25DMG) / (+1 ATQ) \n4 - Os 4 cavaleiros (20SM) / (35DMG) / (+0 ATQ)\n\n";

    cin >> classe;
    // atribuicao status

    if (classe == "Barbaro") {
       hp = 120;
       stamina = 30;
       escudo = 10;
       ataques = "\n1 - Machadada (5SM) / (15DMG) / (+3 ATQ) \n2 - Furia de Lotus (8SM) / (20DMG) / (+2 ATQ) \n3 - Poca de sangue (10SM) / (25DMG) / (+1 ATQ) \n4 - Valhalla (15SM) / (35DMG) / (+0 ATQ)";
    }

    if (classe == "Guerreiro") {
       hp = 100;
       stamina = 50;
       escudo = 14;
       ataques = "\n1 - Espada em chamas (6SM) / (18DMG) / (+3 ATQ) \n2 - Poder Real (8SM) / (22DMG) / (+2 ATQ) \n3 - Majestade (12SM) / (28DMG) / (+1 ATQ) \n4 - Poder celestial (18SM) / (38DMG) / (+0 ATQ)";
    }

    if (classe == "Mago") {
       hp = 60;
       stamina = 80;
       escudo = 8;
       ataques = "\n1 - Bola de Fogo (10SM) / (20DMG) / (+4 ATQ) \n2 - Chuva de raios (15SM) / (25DMG) / (+2 ATQ) \n3 - Incinerar (20SM) / (30DMG) / (+1 ATQ) \n4 - O vazio (25SM) / (40DMG) / (+0 ATQ)";
    }

    if (classe == "Necromante") {
       hp = 70;
       stamina = 60;
       escudo = 9;
       ataques = "\n1 - Esqueletos (8SM) / (15DMG) / (+3 ATQ) \n2 - Caes de guerra (12SM) / (20DMG) / (+2 ATQ) \n3 - Servos (15SM) / (25DMG) / (+1 ATQ) \n4 - Os 4 cavaleiros (20SM) / (35DMG) / (+0 ATQ)";
    }

    return 0;
}




int escolherInimigo() {

    //escolher inimigo / nivel do combate

    cout << "\nQual sera o inimigo do nosso querido " << classe << "\n\n";

    cout << "Nivel 1 - Esqueleto \n";
    cout << "Nivel 2 - Saqueador \n";
    cout << "Nivel 3 - Orc \n";
    cout << "Nivel 4 - Guardiao \n";
    cout << "Nivel 5 - Trevas \n";

    cout << "\n";
    cin >> inimigo;

    if (inimigo == "Esqueleto") {
       hpInimigo = 30;
       escudoInimigo = 8;
    }

    if (inimigo == "Saqueador") {
       hpInimigo = 50;
       escudoInimigo = 10;
    }

    if (inimigo == "Orc") {
       hpInimigo = 80;
       escudoInimigo = 14;
    }

    if (inimigo == "Guardiao") {
       hpInimigo = 100;
       escudoInimigo = 16;
    }

    if (inimigo == "Trevas") {
       hpInimigo = 120;
       escudoInimigo = 12;
    }

    return 0;
}

int combate() {

// mostrar o menu
   if (inimigo == "Esqueleto") {
       cout << "\n\nEnquanto caminhava pelas tumbas na calada da noite, voce escuta uma mistura de uma ventania e ossos se batendo";
       cout << " um esqueleto te encontra sedento de sede de vingança por perturbar seu sono";
    }

    if (inimigo == "Saqueador") {
       cout << "\n\nEnquanto caminhava pelas brisas da primavera em pastos verdejantes";
       cout << " um dardo atinge perto de sua localizacao, ao olhar pra tras voce ve mais um desses saqueadores insuportaveis";
       cout << " , livre-se desse insuportavel";
    }

    if (inimigo == "Orc") {
       cout << "\n\nVoce acorda em uma sala fechada com cheiro de umidade, o som dos pingos caindo sobre as rochas que constituem a estrutura do local";
       cout << " , ao tentar fugir, voce e barrado por um Orc, coberto por uma especie de virus negro que consome seu corpo";
       cout << " , Voce tem uma chance";
    }

    if (inimigo == "Guardiao") {
       cout << "\n\nNa busca de uma riqueza inigualavel, voce busca pelo castelo conhecido pelas suas riquezas";
       cout << ", ao chegar ao fim do castelo, uma porta separava seu futuro, essa guardada por um Guardiao tolo e furioso, vai encarar?";
    }

    if (inimigo == "Trevas") {
       cout << "\n\nA escuridao consumiu seu mundo, escuridao vinda de uma unica criatura";
       cout << " , um ser que perdeu toda luz que a vida poderia dar, fonte de todo o caos e destruiçao";
       cout << ", voce se prepara, mas preparo sera suficiente?";
    }

    // escolher ataque

    do {
        if (turno == "jogador") {

            cout << "\n\nO que voce ira fazer: \n\n";
            cout << ataques;
            cout << "\n\n";
            cout << "sua vida agora e: " << hp << " e sua stamina esta em " << stamina << "\n";
            cout << "A vida do inimigo e: " << hpInimigo << "\n\n";
            cin >> golpe;

            // rolar o d20

            int d20Jogador = rand() % 20 + 1;

            // ver o dano final e calcular chance de acerto

            if (classe == "Barbaro") {
               if (golpe == "1") {
                  if (stamina >= 5) {
                     ataqueFinal = d20Jogador + 3;
                     danoAtaque = 15;
                     stamina = stamina - 5;
                  } else { cout << "Voce nao tem stamina o suficiente para esse ataque, atacou sem forca e perdeu o turno, leia da proxima \n\n"; }
               } else if (golpe == "2") {
                  if (stamina >= 8) {
                     ataqueFinal = d20Jogador + 2;
                     danoAtaque = 20;
                     stamina = stamina - 8;
                  } else { cout << "Voce nao tem stamina o suficiente para esse ataque, atacou sem forca e perdeu o turno, leia da proxima \n\n"; }
               } else if (golpe == "3") {
                  if (stamina >= 10) {
                     ataqueFinal = d20Jogador + 1;
                     danoAtaque = 25;
                     stamina = stamina - 10;
                  } else { cout << "Voce nao tem stamina o suficiente para esse ataque, atacou sem forca e perdeu o turno, leia da proxima \n\n"; }
               } else if (golpe == "4") {
                  if (stamina >= 15) {
                     ataqueFinal = d20Jogador + 0;
                     danoAtaque = 35;
                     stamina = stamina - 15;
                  } else { cout << "Voce nao tem stamina o suficiente para esse ataque, atacou sem forca e perdeu o turno, leia da proxima \n\n"; }
               } else { cout << "Escolha outro ataque \n\n"; }
            }

            if (classe == "Guerreiro") {
               if (golpe == "1") {
                  if (stamina >= 6) {
                     ataqueFinal = d20Jogador + 3;
                     danoAtaque = 18;
                     stamina = stamina - 6;
                  } else { cout << "Voce nao tem stamina o suficiente para esse ataque, atacou sem forca e perdeu o turno, leia da proxima \n\n"; }
               } else if (golpe == "2") {
                  if (stamina >= 8) {
                     ataqueFinal = d20Jogador + 2;
                     danoAtaque = 22;
                     stamina = stamina - 8;
                  } else { cout << "Voce nao tem stamina o suficiente para esse ataque, atacou sem forca e perdeu o turno, leia da proxima \n\n"; }
               } else if (golpe == "3") {
                  if (stamina >= 12) {
                     ataqueFinal = d20Jogador + 1;
                     danoAtaque = 28;
                     stamina = stamina - 12;
                  } else { cout << "Voce nao tem stamina o suficiente para esse ataque, atacou sem forca e perdeu o turno, leia da proxima \n\n"; }
               } else if (golpe == "4") {
                  if (stamina >= 18) {
                     ataqueFinal = d20Jogador + 0;
                     danoAtaque = 38;
                     stamina = stamina - 18;
                  } else { cout << "Voce nao tem stamina o suficiente para esse ataque, atacou sem forca e perdeu o turno, leia da proxima \n\n"; }
               } else { cout << "Escolha outro ataque \n\n"; }
            }

            if (classe == "Mago") {
               if (golpe == "1") {
                  if (stamina >= 10) {
                     ataqueFinal = d20Jogador + 3;
                     danoAtaque = 20;
                     stamina = stamina - 10;
                  } else { cout << "Voce nao tem stamina o suficiente para esse ataque, atacou sem forca e perdeu o turno, leia da proxima \n\n"; }
               } else if (golpe == "2") {
                  if (stamina >= 15) {
                     ataqueFinal = d20Jogador + 2;
                     danoAtaque = 25;
                     stamina = stamina - 15;
                  } else { cout << "Voce nao tem stamina o suficiente para esse ataque, atacou sem forca e perdeu o turno, leia da proxima \n\n"; }
               } else if (golpe == "3") {
                  if (stamina >= 20) {
                     ataqueFinal = d20Jogador + 1;
                     danoAtaque = 30;
                     stamina = stamina - 20;
                  } else { cout << "Voce nao tem stamina o suficiente para esse ataque, atacou sem forca e perdeu o turno, leia da proxima \n\n"; }
               } else if (golpe == "4") {
                  if (stamina >= 25) {
                     ataqueFinal = d20Jogador + 0;
                     danoAtaque = 40;
                     stamina = stamina - 25;
                  } else { cout << "Voce nao tem stamina o suficiente para esse ataque, atacou sem forca e perdeu o turno, leia da proxima \n\n"; }
               } else { cout << "Escolha outro ataque \n\n"; }
            }

            if (classe == "Necromante") {
               if (golpe == "1") {
                  if (stamina >= 8) {
                     ataqueFinal = d20Jogador + 3;
                     danoAtaque = 15;
                     stamina = stamina - 8;
                  } else { cout << "Voce nao tem stamina o suficiente para esse ataque, atacou sem forca e perdeu o turno, leia da proxima \n\n"; }
               } else if (golpe == "2") {
                  if (stamina >= 12) {
                     ataqueFinal = d20Jogador + 2;
                     danoAtaque = 20;
                     stamina = stamina - 12;
                  } else { cout << "Voce nao tem stamina o suficiente para esse ataque, atacou sem forca e perdeu o turno, leia da proxima \n\n"; }
               } else if (golpe == "3") {
                  if (stamina >= 15) {
                     ataqueFinal = d20Jogador + 1;
                     danoAtaque = 25;
                     stamina = stamina - 15;
                  } else { cout << "Voce nao tem stamina o suficiente para esse ataque, atacou sem forca e perdeu o turno, leia da proxima \n\n"; }
               } else if (golpe == "4") {
                  if (stamina >= 20) {
                     ataqueFinal = d20Jogador + 0;
                     danoAtaque = 35;
                     stamina = stamina - 20;
                  } else { cout << "Voce nao tem stamina o suficiente para esse ataque, atacou sem forca e perdeu o turno, leia da proxima \n\n"; }
               } else { cout << "Escolha outro ataque \n\n"; }
            }

            // verificar se vai acertar

            cout << "\n\nVoce rolou um ataque e ... ";

            if (ataqueFinal > escudoInimigo) {
               hpInimigo = hpInimigo - danoAtaque;
               cout << "Voce acerta em cheio e da " << danoAtaque << " de dano ao inimigo\n\n";
               stamina = stamina + 5;
               if (hpInimigo <= 0) {
                   cout << "\n\nVoce matou ele... parabens\n\n";
                   jogoAcabou = true;
                   break;
                }
               turno = "npc";
            } else {
              cout << "Puts... voce erra e passa o turno\n\n";
              stamina = stamina + 5;
              turno = "npc";
            }

       }
        if (turno == "npc") {
              cout << "\n\nTurno do inimigo... ele decide atacar e... ";

              int d20NPC = rand() % 20 + 1;

              if (inimigo == "Esqueleto") {
                     ataqueFinalInimigo = d20NPC + 2;
                     danoAtaqueInimigo = 8;
              } else if (inimigo == "Saqueador") {
                     ataqueFinalInimigo = d20NPC + 3;
                     danoAtaqueInimigo = 12;
              } else if (inimigo == "Orc") {
                     ataqueFinalInimigo = d20NPC + 2;
                     danoAtaqueInimigo = 18;
              } else if (inimigo == "Guardiao") {
                     ataqueFinalInimigo = d20NPC + 1;
                     danoAtaqueInimigo = 22;
              } else if (inimigo == "O Corruptor") {
                     ataqueFinalInimigo = d20NPC + 2;
                     danoAtaqueInimigo = 25;
              }

              if (ataqueFinalInimigo > escudo) {
               hp = hp - danoAtaqueInimigo;
               cout << "Acerta em cheio e te da " << danoAtaqueInimigo << " de dano \n\n";
               if (hp <= 0) {
                   cout << "\n\nVoce morreu... decepcionante\n\n";
                   jogoAcabou = true;
                   break;
               }
            } else {
                   cout << "Erra miseravelmente \n\n";  }
            }

        //Verificar se alguem ganhou

        turno = "jogador";

    } while (hp > 0 && hpInimigo > 0);

    return 0;
}



int main() {
    escolhaClasse();
    escolherInimigo();
    combate();

    system("pause");
}
