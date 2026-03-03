#include <iostream>
using namespace std;

struct Modulo {
    string codModulo;
    string nomeModulo;
    string disciplina;
    int notaModulo;
    bool concluido;
};

void mostrarInfo(Modulo moduloX) {
    cout << "Codigo do modulo: " << moduloX.codModulo << "\n";
    cout << "Nome do modulo: " << moduloX.nomeModulo << "\n";
    cout << "Disciplina: " << moduloX.disciplina << "\n";
    cout << "Nota do modulo: " << moduloX.notaModulo << "\n";
    if(moduloX.concluido == true) {
        cout << "concluido? Sim" << "\n";
    } else {
        cout << "concluido? Nao" << "\n";
    }
    cout << "\n\n";
}

int mediaDisciplina(Modulo moduloUm, Modulo moduloDois, Modulo moduloTres, Modulo moduloQuatro, Modulo moduloCinco, Modulo moduloSeis, Modulo moduloSete) {
    int notaModulos;
    int modulosConcluidos = 0;
    int mediaNotas;
    notaModulos = moduloUm.notaModulo + moduloDois.notaModulo + moduloTres.notaModulo + moduloQuatro.notaModulo + moduloCinco.notaModulo + moduloSeis.notaModulo + moduloSete.notaModulo;

    if (moduloUm.concluido == true) {
        modulosConcluidos += 1;
    } if (moduloDois.concluido == true) {
        modulosConcluidos += 1;
    } if (moduloTres.concluido == true) {
        modulosConcluidos += 1;
    } if (moduloQuatro.concluido == true) {
        modulosConcluidos += 1;
    } if (moduloCinco.concluido == true) {
        modulosConcluidos += 1;
    } if (moduloSeis.concluido == true) {
        modulosConcluidos += 1;
    } if (moduloSete.concluido == true) {
        modulosConcluidos += 1;
    }

    mediaNotas = notaModulos / modulosConcluidos;
    return mediaNotas;
}

string concluidoDisciplina(Modulo mUm, Modulo mDois, Modulo mTres, Modulo mQuatro, Modulo mCinco, Modulo mSeis, Modulo mSete) {
    string modulosConcluidos = "";

    if (mUm.concluido == true) {
        modulosConcluidos = modulosConcluidos + mUm.codModulo + " - " +  mUm.nomeModulo +  " - " + mUm.disciplina + "\n";
    } if (mDois.concluido == true) {
        modulosConcluidos = modulosConcluidos + mDois.codModulo + " - " +  mDois.nomeModulo +  " - " + mDois.disciplina + "\n";
    } if (mTres.concluido == true) {
        modulosConcluidos = modulosConcluidos + mTres.codModulo + " - " +  mTres.nomeModulo +  " - " + mTres.disciplina + "\n";
    } if (mQuatro.concluido == true) {
        modulosConcluidos = modulosConcluidos + mQuatro.codModulo + " - " +  mQuatro.nomeModulo +  " - " + mQuatro.disciplina + "\n";
    } if (mCinco.concluido == true) {
        modulosConcluidos = modulosConcluidos + mCinco.codModulo + " - " +  mCinco.nomeModulo +  " - " + mCinco.disciplina + "\n";
    } if (mSeis.concluido == true) {
        modulosConcluidos = modulosConcluidos + mSeis.codModulo + " - " +  mSeis.nomeModulo +  " - " + mSeis.disciplina + "\n";
    } if (mSete.concluido == true) {
        modulosConcluidos = modulosConcluidos + mSete.codModulo + " - " +  mSete.nomeModulo +  " - " + mSete.disciplina + "\n";
    }

    return modulosConcluidos;
}

string porconcluirDisciplina(Modulo m1, Modulo m2, Modulo m3, Modulo m4, Modulo m5, Modulo m6, Modulo m7) {
    string moduloPorconcluir = "";

    if (m1.concluido == false) {
        moduloPorconcluir = moduloPorconcluir + m1.codModulo + " - " +  m1.nomeModulo +  " - " + m1.disciplina + "\n";
    } if (m2.concluido == false) {
        moduloPorconcluir = moduloPorconcluir + m2.codModulo + " - " +  m2.nomeModulo +  " - " + m2.disciplina + "\n";
    } if (m3.concluido == false) {
        moduloPorconcluir = moduloPorconcluir + m3.codModulo + " - " +  m3.nomeModulo +  " - " + m3.disciplina + "\n";
    } if (m4.concluido == false) {
        moduloPorconcluir = moduloPorconcluir + m4.codModulo + " - " +  m4.nomeModulo +  " - " + m4.disciplina + "\n";
    } if (m5.concluido == false) {
        moduloPorconcluir = moduloPorconcluir + m5.codModulo + " - " +  m5.nomeModulo +  " - " + m5.disciplina + "\n";
    } if (m6.concluido == false) {
        moduloPorconcluir = moduloPorconcluir + m6.codModulo + " - " +  m6.nomeModulo +  " - " + m6.disciplina + "\n";
    } if (m7.concluido == false) {
        moduloPorconcluir = moduloPorconcluir + m7.codModulo + " - " +  m7.nomeModulo +  " - " + m7.disciplina + "\n";
    }

    return moduloPorconcluir;
}

int main() {
    Modulo modulo1;
    Modulo modulo2;
    Modulo modulo3;
    Modulo modulo4;
    Modulo modulo5;
    Modulo modulo6;
    Modulo modulo7;

    modulo1.codModulo = "0804";
    modulo1.nomeModulo = "Algoritmos";
    modulo1.disciplina = "Programacao";
    modulo1.notaModulo = 20;
    modulo1.concluido = true;

    modulo2.codModulo = "0805";
    modulo2.nomeModulo = "Estruturas de dados";
    modulo2.disciplina = "Programacao";
    modulo2.notaModulo = 18;
    modulo2.concluido = true;

    modulo3.codModulo = "0806";
    modulo3.nomeModulo = "Principios metodologicos de programacao";
    modulo3.disciplina = "Programacao";
    modulo3.notaModulo = 18;
    modulo3.concluido = true;

    modulo4.codModulo = "0809";
    modulo4.nomeModulo = "Programacao em C/C++ - fundamentos";
    modulo4.disciplina = "Programacao";
    modulo4.notaModulo = 20;
    modulo4.concluido = true;

    modulo5.codModulo = "0810";
    modulo5.nomeModulo = "Programacao em C/C++ - avancada";
    modulo5.disciplina = "Programacao";
    modulo5.notaModulo = 0;
    modulo5.concluido = false;

    modulo6.codModulo = "0816";
    modulo6.nomeModulo = "Programacao de sistemas distribuidos - JAVA";
    modulo6.disciplina = "Programacao";
    modulo6.notaModulo = 0;
    modulo6.concluido = false;

    modulo7.codModulo = "10791";
    modulo7.nomeModulo = "Desenvolvimento de aplicacoes web em JAVA";
    modulo7.disciplina = "Programacao";
    modulo7.notaModulo = 0;
    modulo7.concluido = false;

    cout << "------------ Gestao Modulos ------------";
    cout << "\n\n";

    mostrarInfo(modulo1);
    mostrarInfo(modulo2);
    mostrarInfo(modulo3);
    mostrarInfo(modulo4);
    mostrarInfo(modulo5);
    mostrarInfo(modulo6);
    mostrarInfo(modulo7);

    cout << "------------ Media Notas ------------";
    cout << "\n\n";

    cout << mediaDisciplina(modulo1, modulo2, modulo3, modulo4, modulo5, modulo6, modulo7);

    cout << "\n\n";
    cout << "------------ Modulos Concluidos ------------";
    cout << "\n\n";

    cout << concluidoDisciplina(modulo1, modulo2, modulo3, modulo4, modulo5, modulo6, modulo7);

    cout << "\n";
    cout << "------------ Modulos Por Concluir ------------";
    cout << "\n\n";

    cout << porconcluirDisciplina(modulo1, modulo2, modulo3, modulo4, modulo5, modulo6, modulo7);

    return 0;
}
