
// Cette queue lorque on insere un nouvel élément pousse l'élément le plus vieux dehors qand 
// la queue est pleine.
template<class T> class HistoryQueue
{
  T * m_Array;
  int m_Size;
  int m_In;
  int m_Out;
  int m_NbItem;

public :
  Queue ( int Size )
  {
    m_Array = new T[Size];
    m_Size = Size;
    m_In = 0;
    m_Out = 0;
    m_NbItem = 0;
  };

  ~Queue()
  {
    delete [] m_Array;
  };


  bool IsFull()
  {
    return  GetSize() == m_Size;
  };


  bool NotEmpty()
  {
    return  m_Out == m_In;
  };


  int GetSize()
  {
    if ( m_In < m_Out )
      return m_Size - m_Out + m_In;
    else
      return m_In - m_Out;
  };

  T Pop()
  {
    T Obj;
    

    if ( ! NotEmpty() )
      {
        if ( m_Out == m_Size)
          {
            Obj = m_Array[m_Size-1];
            m_Out = 0;
          }
        else
          {
            Obj = m_Array[m_Out];
            m_Out++;
          }

      }        
    return Obj;
  };


  void Push( T Obj)
  {
    m_Array[m_In] = Obj;

    m_NbItem++;
    m_In++;

    bool IsPlein = m_NbItem == m_Size;

    if ( m_In == m_Size)
      m_In = 0;

    if ( IsPlein )
      {
        m_NbItem--;
        if ( m_Out == m_Size)
          m_Out = 0;
        m_Out++;
      }

    T Front()
      {
	if ( ! NotEmpty() )
	   return  m_Array[m_Out];
      };

    T Back()
      {
	if ( ! NotEmpty() )
	   return  m_Array[m_In];
      }

  };


};
