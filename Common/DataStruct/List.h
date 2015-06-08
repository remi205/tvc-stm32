//
// FractalConcept - 2002-2004
// Rémi Prud'homme
//

/******************************************************************************
 *   Fichier    :   liste.h
 *
 *   Auteurs		:	
 *
 *   Date de creation   :   
 *   Modification       :   
 *****************************************************************************/

#pragma once


//

template<class T> class List
{
public:
  
  
  struct ElementList 
  {
    T  * m_Val;
    ElementList *Next;
  };
  
  
  ElementList * m_List;
  
  ElementList * m_Current;
  
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
    List()  {;};

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
    ElementList * NewList (void)
       {
       ElementList *p;
       p = new ElementList;
       if ( p == NULL)
           return NULL;
       p->Next = p;
       return p;
       };

    ////////////////////////////////////////////////////////////////////////
    //  Function :  bEmpty
    //  IN   : 
    //          
    //  OUT  :
    //  RET  : 
    //
    //  Notes : 
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
    //  Notes : 
    //
    /////////////////////////////////////////////////////////////////////////
    void DeleteAll()
        {
          while ( GetHead() != NULL ) ;
        };

    ////////////////////////////////////////////////////////////////////////
    //  Function : PutTail
    //  IN   : 
    //          
    //  OUT  :
    //  RET  : 
    //
    //  Notes : 
    //
    /////////////////////////////////////////////////////////////////////////
    void  PutTail (  T  * Val)
       {
       ElementList *p = new ElementList;
       if ( p == NULL )
          return;

       /* insertion en queue */
       p->Next = m_List->Next;
       m_List->m_Val = Val;
       m_List->Next = p;
       m_List = p;
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
    //  Function :  GetHead
    //  IN   : 
    //          
    //  OUT  :
    //  RET  : 
    //
    //  Notes : 
    //
    /////////////////////////////////////////////////////////////////////////
    T  *  GetHead ( )
       {
       ElementList *p;
       T *r;

       p = m_List->Next;
       if ( p != m_List)
          {
          m_List->Next = p->Next;
          r = p->m_Val;

          delete p;
          return r;
          }
       else
          {
          return NULL;
          }
       };



    ////////////////////////////////////////////////////////////////////////
    //  Function :  DeleteItem
    //  IN   : 
    //          
    //  OUT  :
    //  RET  : 
    //
    //  Notes : 
    //
    /////////////////////////////////////////////////////////////////////////
    bool DeleteItem( T  * Val)
      {
        ElementList *Courant, *Precedent = 0;
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
      }

    
    /////////////////////////////////////////////////////
    //  Function : DeleteItem
    //  IN   : 
    //          
    //  OUT  :
    //  RET  : 
    //
    //  Notes : 
    //
    /////////////////////////////////////////////////////////////////////////
    bool DeleteItem( char * szName)
        {
        ElementList *Courant, *Precedent = 0;
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
      ElementList *Courant, *Precedent = 0;
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
      ElementList *Courant, *Precedent = 0;
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
       ElementList *p;
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

  };



