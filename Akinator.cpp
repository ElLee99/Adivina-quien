#include <iostream>
using namespace std;

struct answers_Node{
    string answers_reference;
    string answers [10];
};


struct bynary_Node{
    string bread_name;
    char reference;
    bynary_Node *yes;
    bynary_Node *no;
    answers_Node *yes_answers;
    answers_Node *no_answers;
};


void _init_Node_(bynary_Node *_bynary_Node, string _bread_name, char _reference){
    _bynary_Node -> bread_name = _bread_name;
    _bynary_Node -> reference = _reference;
    _bynary_Node -> yes = NULL;
    _bynary_Node -> no = NULL;
    _bynary_Node -> yes_answers = NULL;
    _bynary_Node -> no_answers = NULL;
}


void _link_Yes_Node_(bynary_Node *_primary_Node, bynary_Node *_linking_Node){
    _primary_Node -> yes = _linking_Node;
}


void _link_No_Node_(bynary_Node *_primary_Node, bynary_Node *_linking_Node){
    _primary_Node -> no = _linking_Node;
}


void _print_Node_(bynary_Node *_bynary_Node){
    cout<<_bynary_Node -> bread_name<<endl;
    cout<<_bynary_Node -> reference<<endl;
    cout<<_bynary_Node -> yes<<endl;
    cout<<_bynary_Node -> no<<endl;
    cout<<_bynary_Node -> yes_answers<<endl;
    cout<<_bynary_Node -> no_answers<<endl;
}


void _init__Answers_Node_(answers_Node* _answers_Node, string _answers_reference, string _answer1){
    _answers_Node -> answers_reference = _answers_reference;
    _answers_Node -> answers[0] = _answer1;
    for(int i= 1; i< 9; i++){
        _answers_Node -> answers[i] = "";
    }
}


void _print_Answers_Node_(answers_Node* _answers_Node){
    int i = 0;
    while ((_answers_Node -> answers [i])!=""){
        cout<<_answers_Node -> answers [i]<<"\n            ";
        i++;
    }
    
}


void _link_Answers_Yes_Node_(bynary_Node *_primary_Node, answers_Node *_linking_Node){
    _primary_Node -> yes_answers = _linking_Node;
}


void _link_Answers_No_Node_(bynary_Node *_primary_Node, answers_Node *_linking_Node){
    _primary_Node -> no_answers = _linking_Node;
}


void _add_Answers_Node(answers_Node *_answers_Node, string _answers){
    int i = 0;
    while((_answers_Node -> answers [i]) != ""){
        i++;
    }
    if (i>=9){
        cout << "Ya están llenas las respuestas de este tipo de pan";
    }
    else{
        _answers_Node -> answers[i] = _answers;
    }
}



int main()
{
    char input;
    string input_string;
    bynary_Node *actual = new bynary_Node();
    answers_Node *actual_answer = new answers_Node();
    bool exit_loop;
    bool still_playing = true;
    
    
    bynary_Node *node0 = new bynary_Node();
    bynary_Node *node1 = new bynary_Node();
    bynary_Node *node2 = new bynary_Node();
    bynary_Node *node3 = new bynary_Node();
    bynary_Node *node4 = new bynary_Node();
    bynary_Node *node5 = new bynary_Node();
    bynary_Node *node6 = new bynary_Node();
    bynary_Node *node7 = new bynary_Node();
    bynary_Node *node8 = new bynary_Node();
    bynary_Node *node9 = new bynary_Node();
    bynary_Node *node10 = new bynary_Node();
    bynary_Node *node11 = new bynary_Node();
    bynary_Node *node12 = new bynary_Node();
    bynary_Node *node13 = new bynary_Node();
    bynary_Node *node14 = new bynary_Node();
    answers_Node *node15 = new answers_Node();
    answers_Node *node16 = new answers_Node();
    answers_Node *node17 = new answers_Node();
    answers_Node *node18 = new answers_Node();
    answers_Node *node19 = new answers_Node();
    answers_Node *node20 = new answers_Node();
    answers_Node *node21 = new answers_Node();
    answers_Node *node22 = new answers_Node();
    answers_Node *node23 = new answers_Node();
    answers_Node *node24 = new answers_Node();
    answers_Node *node25 = new answers_Node();
    answers_Node *node26 = new answers_Node();
    answers_Node *node27 = new answers_Node();
    answers_Node *node28 = new answers_Node();
    answers_Node *node29 = new answers_Node();
    answers_Node *node30 = new answers_Node();

    
    _init_Node_ (node0, "Eres dulce?", '0');
    _init_Node_ (node1, "Estas cubierto de algo?", '1');
    _init_Node_ (node2, "Alguna vez te echaron en el lonche", '2');
    _init_Node_ (node3, "Estás rellenito", '3');
    _init_Node_ (node4, "Estas esponjosito?", '4');
    _init_Node_ (node5, "Eres de caja", '5');
    _init_Node_ (node6, "Eres extranjero?", '6');
    _init_Node_ (node7, "Estas relleno de leche?", '7');
    _init_Node_ (node8, "Estas cubierto de azucar?", '8');
    _init_Node_ (node9, "Tas hueco?", '9');
    _init_Node_ (node10, "Eres de hojaldre", 'a');
    _init_Node_ (node11, "Eres integral", 'b');
    _init_Node_ (node12, "Eres sacadientes", 'c');
    _init_Node_ (node13, "Te podrían usar de martillo", 'd');
    _init_Node_ (node14, "Tienes carne en medio?", 'e');
    _init__Answers_Node_ (node15, "0137y", "Empanada de leche");
    _init__Answers_Node_ (node16, "0137n", "Empanada de fresa");
    _init__Answers_Node_ (node17, "0138y", "Pan de muerto");
    _init__Answers_Node_ (node18, "0138n", "Concha");
    _init__Answers_Node_ (node19, "0149y", "Dona");
    _init__Answers_Node_ (node20, "0149n", "Mantecada");
    _init__Answers_Node_ (node21, "014ay", "Oreja");
    _init__Answers_Node_ (node22, "014an", "Gordita de nata");
    _init__Answers_Node_ (node23, "025by", "Pan integral bimbo");
    _init__Answers_Node_ (node24, "025bn", "Pan blanco bimbo");
    _init__Answers_Node_ (node25, "025cy", "Birote");
    _init__Answers_Node_ (node26, "025cn", "Telera");
    _init__Answers_Node_ (node27, "026dy", "Pan frances");
    _init__Answers_Node_ (node28, "026dn", "Croissant");
    _init__Answers_Node_ (node29, "026ey", "Hamburguesas");
    _init__Answers_Node_ (node30, "026en", "Bisquet");
    
    
    _link_Yes_Node_(node0, node1);
    _link_No_Node_(node0, node2);
    _link_Yes_Node_(node1, node3);
    _link_No_Node_(node1, node4);
    _link_Yes_Node_(node2, node5);
    _link_No_Node_(node2, node6);
    _link_Yes_Node_(node3, node7);
    _link_No_Node_(node3, node8);
    _link_Yes_Node_(node4, node9);
    _link_No_Node_(node4, node10);
    _link_Yes_Node_(node5, node11);
    _link_No_Node_(node5, node12);
    _link_Yes_Node_(node6, node13);
    _link_No_Node_(node6, node14);
    _link_Answers_Yes_Node_(node7, node15);
    _link_Answers_No_Node_(node7, node16);
    _link_Answers_Yes_Node_(node8, node17);
    _link_Answers_No_Node_(node8, node18);
    _link_Answers_Yes_Node_(node9, node19);
    _link_Answers_No_Node_(node9, node20);
    _link_Answers_Yes_Node_(node10, node21);
    _link_Answers_No_Node_(node10, node22);
    _link_Answers_Yes_Node_(node11, node23);
    _link_Answers_No_Node_(node11, node24);
    _link_Answers_Yes_Node_(node12, node25);
    _link_Answers_No_Node_(node12, node26);
    _link_Answers_Yes_Node_(node13, node27);
    _link_Answers_No_Node_(node13, node28);
    _link_Answers_Yes_Node_(node14, node29);
    _link_Answers_No_Node_(node14, node30);
    
    
    do{
        exit_loop = false;
        actual = node0;
        actual_answer = NULL;
        cout<<"\n\n\nBienvenido al adivinador de pan"<<endl;
        cout<<""<<endl;
    
    
        while (exit_loop == false){
            cout << "\n";
            cout<<actual -> bread_name<<endl;
            cout<<"Para contestar SI teclee s, para responder NO, teclee la letra n"<<endl;
            cin >> input;
        
            if (( actual -> yes) != NULL){
            
                if (input == 's'){
                    actual = actual -> yes;
                }
                else {
                    if ((input == 'n')){
                        actual = actual -> no;    
                    }    
                    else{
                    cout<<"Elija una de las opciones validas y vuelva a intentarlo"<<endl;
                    }
                }   
            }
        
        
            else{
                if (input == 's'){
                    actual_answer = actual -> yes_answers;
                }
                else {
                    if ((input == 'n')){
                        actual_answer = actual -> no_answers;    
                    }    
                    else{
                        cout<<"Elija una de las opciones validas y vuelva a intentarlo"<<endl;
                    }
                }
                cout<<"\nEres un/una ";
                _print_Answers_Node_(actual_answer);
                cout<<"\n\nQuisieras agregar otra sugerencia de pan?"<<endl;
                cout<<"Para contestar SI teclee s, para responder NO, teclee la letra n"<<endl;
                cin >> input;
                
                if (input == 's'){
                    cout<<"\nEscriba el nombre del pan en el que está pensando"<<endl;
                    cin >> input_string;
                    _add_Answers_Node(actual_answer, input_string);
                }
                exit_loop = true;
            }
        }
        cout << "\n\nDesea seguir jugando" <<endl;
        cout<<"Para seguir jugando teclee s, para dejar de jugar teclee n"<<endl;
        cin >> input;
        
        if (input == 'n') still_playing = false;
        else still_playing = true;
        
    }while(still_playing == true); 


    return 0;
}