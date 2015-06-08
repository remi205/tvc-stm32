
#pragma once

class Gpio 
{
private:
  bool	_isOut;

  int	_ioFd;
  
  uint	_currentValue;
  uint	_pinNumber;
  
  int	exportPin();
  void	openFd();
  int	setDirection(bool out);
  
public:
  Gpio(uint pinNumber, bool isOut = true);
  ~Gpio();

  int	getValue(uint* value);
  
  int setEdge(char *edge);
  int setValue(uint value);
  
};

