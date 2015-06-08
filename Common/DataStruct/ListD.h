

template<class T> class ListD
{
public:
  struct ElementListD 
  {
    T  * m_Val;
    ElementListD *Previous;
    ElementListD *Next;
  };
  
  
  ElementListD * m_List;
  
  ElementListD * m_Current;
  
public:

  ////////////////////////////////////////////////////////////////////////
  //  Function : 
  //  IN   : 
  //          
  //  OUT  :
  //  RET  : 
  //
  //  Notes : 
  //
  /////////////////////////////////////////////////////////////////////////
  ListD()  {;};

  ////////////////////////////////////////////////////////////////////////
  //  Function :  Initialise
  //  IN   : 
  //          
  //  OUT  :
  //  RET  : 
  //
  //  Notes : 
  //
  /////////////////////////////////////////////////////////////////////////
  bool  Initialise()
  {
    m_List = NewList();
    return true;
  };


  ////////////////////////////////////////////////////////////////////////
  //  Function : NewList
  //  IN   : 
  //          
  //  OUT  :
  //  RET  : 
  //
  //  Notes : 
  //
  /////////////////////////////////////////////////////////////////////////
  ElementListD * NewList (void)
  {
    ElementListD *p;
    p = new ElementListD;
    if ( p == NULL)
      return NULL;
    p->Next = p;
    p->Previous = p;
    return p;
  };

  ////////////////////////////////////////////////////////////////////////
  //  Function :  bEmpty
  //  IN   : 
  //          
  //  OUT  :
  //  RET  : 
  //
  //  Notes : prédicat qui indique que la liste est vide
  //
  /////////////////////////////////////////////////////////////////////////
  bool bEmpty ()
  {
    return ( m_List == m_List->Next );
  };

  ////////////////////////////////////////////////////////////////////////
  //  Function : DeleteAll
  //  IN   : 
  //          
  //  OUT  :
  //  RET  : 
  //
  //  Notes : Supprime tous les élémeents de la liste
  //
  /////////////////////////////////////////////////////////////////////////
  void DeleteAll()
  {
    while ( GetHead() != NULL ) ;
  };

  ////////////////////////////////////////////////////////////////////////
  //  Function :  StartIteration
  //  IN   : 
  //          
  //  OUT  :
  //  RET  : 
  //
  //  Notes : Initialise le pointeur de parcours sur le premier element
  //          de la liste ou NULL
  //
  /////////////////////////////////////////////////////////////////////////
  void StartIteration()
  {
    if ( ! bEmpty())
      m_Current = m_List->Next;
    else
      m_Current = NULL;
  }

  ////////////////////////////////////////////////////////////////////////
  //  Function :  Next
  //  IN   : 
  //          
  //  OUT  :
  //  RET  : 
  //
  //  Notes : Donne l'element courant et position le pointeur de parcours
  //          sur l'élement suivant. Si il n'y a plus d'élément rend NULL
  //
  /////////////////////////////////////////////////////////////////////////
  T * Next()
  {
    T * Obj = NULL;

    if ( m_Current && (m_Current->Next != m_List->Next) )
      {
        Obj = m_Current->m_Val;
        m_Current = m_Current->Next;
      }
    return Obj;
  }


  ////////////////////////////////////////////////////////////////////////
  //  Function : PutHead
  //  IN   : 
  //          
  //  OUT  :
  //  RET  : 
  //
  //  Notes : Insertion en tete de liste
  //
  /////////////////////////////////////////////////////////////////////////
  void  PutHead (  T  * Val)
  {
    ElementListD *NewEleme = new ElementListD;
    if ( NewEleme == NULL )
      return;

    ElementListD *ElementSuivant = m_List->Next;

    //
    // insertion en queue , m_List est la liste
    //
    NewEleme->m_Val = Val;

    NewEleme->Next =  ElementSuivant;
    ElementSuivant->Previous = NewEleme;

    NewEleme->Previous = m_List;
    m_List->Next = NewEleme;
  };


  ////////////////////////////////////////////////////////////////////////
  //  Function : PutTail
  //  IN   : 
  //          
  //  OUT  :
  //  RET  : 
  //
  //  Notes : Insertion en queue de liste
  //
  /////////////////////////////////////////////////////////////////////////
  void  PutTail (  T  * Val)
  {
    ElementListD *NewEleme = new ElementListD;
    if ( NewEleme == NULL )
      return;

    ElementListD *ElementPrecedent = m_List->Previous;

    //
    // insertion en queue , m_List est la liste
    //
    NewEleme->m_Val = Val;

    NewEleme->Next =  ElementPrecedent->Next;
 

    NewEleme->Previous = ElementPrecedent;
    ElementPrecedent->Next = NewEleme;

    m_List->Previous = NewEleme;
  };


  ////////////////////////////////////////////////////////////////////////
  //  Function :  GetHead
  //  IN   : 
  //          
  //  OUT  :
  //  RET  : 
  //
  //  Notes : on retire la tete de liste
  //
  /////////////////////////////////////////////////////////////////////////
  T  *  GetHead ( )
  {
    ElementListD *p;
    T *r;

    p = m_List->Next;
    if ( p != m_List)
      {
        m_List->Next = p->Next;

        m_List->Next->Previous = m_List;

        r = p->m_Val;

        delete p;
        return r;
      }
    else
      return NULL;
  };


  ////////////////////////////////////////////////////////////////////////
  //  Function : PrintList
  //  IN   : 
  //          
  //  OUT  :
  //  RET  : 
  //
  //  Notes : 
  //
  /////////////////////////////////////////////////////////////////////////
  void PrintList (void  (*InfoPrint)( T *))
  {
    ElementListD *p;
    if ( !bEmpty() )
      {
        p = m_List->Next;
        while ( m_List != p )
          {
            (*InfoPrint)( p->m_Val);
            p = p->Next;
          }
      }
  };



    ////////////////////////////////////////////////////////////////////////
    //  Function :  Find
    //  IN   : 
    //          
    //  OUT  :
    //  RET  : 
    //
    //  Notes : 
    //
    /////////////////////////////////////////////////////////////////////////
    T * Find( char * szName)
      {
      ElementListD *Courant, *Precedent = 0;
        if (!bEmpty() )
          {
          Courant = m_List->Next;
          Precedent = m_List;
          while ( m_List != Courant )
             {
             if ( strcmp( Courant->m_Val->GetName(), szName) == 0 )
               {
               //
               // Hit
               //
                 return Courant->m_Val;
               }
             Precedent = Courant;
             Courant = Courant->Next;
            }
          }
    

      //
      //  Pas trouvé
      //
      return NULL;
      };

    ////////////////////////////////////////////////////////////////////////
    //  Function :  Find
    //  IN   : 
    //          
    //  OUT  :
    //  RET  : 
    //
    //  Notes : 
    //
    /////////////////////////////////////////////////////////////////////////
    T * Find(unsigned int Key)
      {
      ElementListD *Courant, *Precedent = 0;
        if (!bEmpty() )
          {
          Courant = m_List->Next;
          Precedent = m_List;
          while ( m_List != Courant )
             {
             if ( Courant->m_Val->GetKey() == Key )
               {
               //
               // Hit
               //
                 return Courant->m_Val;
               }
             Precedent = Courant;
             Courant = Courant->Next;
            }
          }
    

      //
      //  Pas trouvé
      //
      return NULL;
      };

    ////////////////////////////////////////////////////////////////////////
    //  Function :  DeleteItem
    //  IN   : 
    //          
    //  OUT  :
    //  RET  : 
    //
    //  Notes : Pas encore teste. Y a un pb sur le lien arriere
    //
    /////////////////////////////////////////////////////////////////////////
    bool DeleteItem( T  * Val)
      {
        ElementListD *Courant, *Precedent = 0;
        if (!bEmpty() )
          {
          Courant = m_List->Next;
          Precedent = m_List;
          while ( m_List != Courant )
             {
             if ( Val == Courant->m_Val )
               {
                 // C'est l'element recheché
                 Precedent->Next =Courant->Next ;

                 //
                 // Deletion du 
                 //
                 delete Courant->m_Val;
                 delete Courant;
                 //
                 // delete de l'element de la liste
                 //
                 Courant =  Precedent->Next;
               }
             else
               {
                 Precedent = Courant;
                 Courant = Courant->Next;
               }
             }
          }
      return true;
      };

    /////////////////////////////////////////////////////
    //  Function : DeleteItem
    //  IN   : 
    //          
    //  OUT  :
    //  RET  : 
    //
    //  Notes : Pas encore teste. Y a un pb sur le lien arriere
    //
    /////////////////////////////////////////////////////////////////////////
    bool DeleteItem( char * szName)
        {
        ElementListD *Courant, *Precedent = 0;
        if (!bEmpty() )
          {
          Courant = m_List->Next;
          Precedent = m_List;
          while ( m_List != Courant )
             {
             if ( strcmp( Courant->m_Val->GetName(), szName) == 0 )
               {
                 Precedent->Next =Courant->Next ;

                 //
                 // Deletion du serveur
                 //
                 delete Courant;
                 //
                 // delete de l'element de la liste
                 //
                 Courant =  Precedent->Next;
               }
             else
               {
                 Precedent = Courant;
                 Courant = Courant->Next;
               }
             }
          }
      return true;
      };


    ////////////////////////////////////////////////////////////////////////
    //  Function :  SwapAfter
    //  IN   : 
    //          
    //  OUT  :
    //  RET  : 
    //
    //  Notes : Echange deux elements : la key et son successeur
    //
    /////////////////////////////////////////////////////////////////////////
    T * SwapAfter (unsigned int Key)
      {
      ElementListD *Courant, *Precedent = 0;
        if (!bEmpty() )
          {
          Courant = m_List->Next;
          Precedent = m_List;
          while ( m_List != Courant )
             {
             if ( Courant->m_Val->GetKey() == Key )
               {
                 //
                 // Hit, on peut commencer le travail de swap
                 //
                 
                 // 3 elemente , B Val A
                 // on veut B A Val
                 SwapElemAfter(Precedent, Courant, Courant->Next );
                 // une fois swappé, la parcours de la liste n'est plus cohérent
                 return Courant->m_Val;
               }
             Precedent = Courant;
             Courant = Courant->Next;
            }
          }
    

      //
      //  Pas trouvé
      //
      return NULL;
      };


    ////////////////////////////////////////////////////////////////////////
    //  Function :  Swap
    //  IN   : B C A sont des élément consécutif dans la liste
    //          
    //  OUT  :
    //  RET  : 
    //
    //  Notes : echange de element B C A et en sorie on a B A C
    //
    /////////////////////////////////////////////////////////////////////////
    void SwapElemAfter( ElementListD * B,  ElementListD * C,  ElementListD * A)
      {
        // on traite B -> A
        B->Next = A;
        A->Previous = B;

        // on traite A -> C
        C->Next = A->Next;
        C->Previous = A;

        // C - Fin 
        A->Next->Previous = C;
        A->Next = C;
      };

    ////////////////////////////////////////////////////////////////////////
    //  Function :  SwapAfter
    //  IN   : 
    //          
    //  OUT  :
    //  RET  : 
    //
    //  Notes : Echange deux elements : la key et son predécesseur
    //
    /////////////////////////////////////////////////////////////////////////
    T * SwapBefore (unsigned int Key)
      {
      ElementListD *Courant, *Precedent = 0;
      if (!bEmpty() )
        {
          Courant = m_List->Next;
          Precedent = m_List;
          while ( m_List != Courant )
            {
              if ( Courant->m_Val->GetKey() == Key )
               {
                 //
                 // Hit, on peut commencer le travail de swap
                 //
                 
                 // 3 elemente , B Val A
                 // on veut B A Val
                 SwapElemBefore(Precedent, Courant, Courant->Next );
                 // une fois swappé, la parcours de la liste n'est plus cohérent
                 return Courant->m_Val;
               }
              Precedent = Courant;
              Courant = Courant->Next;
            }
        }
      //
      //  Pas trouvé
      //
      return NULL;
      };


    ////////////////////////////////////////////////////////////////////////
    //  Function :  SwapElemBefore
    //  IN   : B C A sont des élément consécutif dans la liste
    //          
    //  OUT  :
    //  RET  : 
    //
    //  Notes : echange de element B C A et en sorie on a C B A 
    //
    /////////////////////////////////////////////////////////////////////////
    void SwapElemBefore( ElementListD * B,  ElementListD * C,  ElementListD * A)
      {
        // on traite B -> A
        B->Next = A;
        A->Previous = B;

        // on traite C -> B
        C->Next = B;
        C->Previous = B->Previous;


        // C - Fin 
        B->Previous->Next = C;
        A->Previous = B;
      };
};
