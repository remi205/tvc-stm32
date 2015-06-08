//
// FractalConcept - 2002-2004
// Rémi Prud'homme, Marc Battyani
//

/******************************************************************************
 *   Fichier   :   hash.h
 *
 *   Auteurs      :   R‚mi PRUD'HOMME
 *
 *   Date de creation   :  
 *   Adaptation         :   
 *   Modification       :   
 *                          
 *****************************************************************************/


#pragma once

typedef unsigned (* HASHFUNC ) ( unsigned char *, int);


unsigned short hashfunc( unsigned long s, int Size);


template<class T> class HashTable
  {
   struct HIPT 
     {
      HIPT  * m_Next;
      T     * m_Body;
      unsigned long m_Key;   /* actual length unknown */
     };
   
   HIPT * * m_Table;

    int  m_TabSize;

    public :

      HashTable()
        {
        m_Table = 0;
        m_TabSize = 0;
        };

    ////////////////////////////////////////////////////////////////////////
    //  Function :  DeleteItem
    //  IN   :  int Size
    //          
    //  OUT  :
    //  RET  : 
    //
    //  Notes : 
    //
    /////////////////////////////////////////////////////////////////////////
    bool InitHashTable( int Size)
         {

         //
         // Creation de la table de slot
         //
         m_Table = new HIPT * [ Size ];

         if (  m_Table == NULL )
            return false;


         //
         // Creation de chaque entre
         //

         m_TabSize = Size;

         for( int i = 0; i < m_TabSize ; i++)
              m_Table[i] = NULL;

         return true;
         };


    ////////////////////////////////////////////////////////////////////////
    //  Function :  Insert
    //  IN   :  unsigned long Key ,  T * Body 
    //          
    //  OUT  :
    //  RET  :  int
    //
    //  Notes : 
    //
    /////////////////////////////////////////////////////////////////////////
    int Insert (  unsigned long Key, T * Body )
      {
       HIPT * pelist;
       short hashval;
       bool NewElement = true;

       pelist = m_Table[ hashval = hashfunc( Key, m_TabSize ) ];

       if ( pelist )
          {
          //
          // Une liste existe, on la parcours pour voir si l'élément existe dans le slot
          //
          while( ( NewElement = (Key != pelist->m_Key))  && pelist->m_Next )
             {
             pelist = pelist->m_Next;
             } 
      

          //
          // Creation d'un nouvelle élement en queue de liste
          //
          if ( NewElement )
             {
             if ( (pelist->m_Next =  new HIPT ) == NULL)
                {
                return false;
                }
             pelist = pelist->m_Next;
             }
          }
       else
          {
          //
          // Creation de la liste pour le slot
          //
          if ( ( pelist = (m_Table[ hashval] = new  HIPT ) ) == NULL )
             {
             return false;
             }
          }

       if ( NewElement )
          { 
          //
          // Initialize function name node to undefined state. 
          //
          pelist->m_Next = NULL;
          pelist->m_Key = Key;
          pelist->m_Body = Body;
          }

       return true;
       };


    ////////////////////////////////////////////////////////////////////////
    //  Function :  Find
    //  IN   : unsigned long Key
    //          
    //  OUT  :
    //  RET  :   T * 
    //
    //  Notes : 
    //
    /////////////////////////////////////////////////////////////////////////
    T * Find ( unsigned long Key)
         {
         T * Body;
         HIPT *pelist;
         pelist = m_Table[ hashfunc(  Key , m_TabSize)];
         if ( pelist )
            {
            while ( (Key != pelist->m_Key) &&  pelist->m_Next )
               {
               pelist = pelist->m_Next;
               }   /* End of while */

            if (  Key != pelist->m_Key)
               Body = NULL;
            else
               Body = pelist->m_Body ;
            }
         else
            Body = NULL;

         return Body;
         };




    ////////////////////////////////////////////////////////////////////////
    //  Function :  PrintTable
    //  IN   : 
    //          
    //  OUT  :
    //  RET  : 
    //
    //  Notes : 
    //
    /////////////////////////////////////////////////////////////////////////
      void  PrintTable ( void  (*InfoPrint)( T * Body))
         {
         int i;
         HIPT *p;

         for ( i= 0; i < m_TabSize; i++)
            {
            p = m_Table[ i ];
            while ( p != NULL)
               {
               (* InfoPrint)( p->m_Body);
               p = p->m_Next;
               }
            }
         }


    ////////////////////////////////////////////////////////////////////////
    //  Function :  SuppressHash
    //  IN   :  unsigned long Key 
    //          
    //  OUT  :
    //  RET  : 
    //
    //  Notes : 
    //
    /////////////////////////////////////////////////////////////////////////
      void  SuppressHash( unsigned long Key )
         {
         HIPT *pelist, *p;

         pelist = m_Table[ hashfunc(  Key , m_TabSize)];

         p = NULL;
         if ( pelist )
            {
            while ( (Key != pelist->m_Key)  &&  pelist->m_Next )
               {
               p = pelist;
               pelist = pelist->m_Next;
               }  

            if ( Key != pelist->m_Key)
               {
               return ;
               }
            else
               {
               /* supprimer pelist */
               if ( p == NULL)
                  {
                  /* pelits est le premier element de la liste */
                  delete pelist;
                  m_Table[ hashfunc(  Key , m_TabSize)]= NULL;
                  }
               else
                  {
                  p->m_Next = pelist->m_Next;
                  delete pelist;
                  }
               }
            }
         };
  };

