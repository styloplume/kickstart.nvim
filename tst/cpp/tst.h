#ifndef _tst_h
#define _tst_h

class Example
{
public:
  Example();
  ~Example();

public:
  void        Method();                       // Trailing comments
  void        Method(int);                    // can be aligned
  void        Method(void *);                 // in groups with SpacesBeforeTrailingComments
  void        Method(int, void *, double);    // .
  inline void Method(bool);
  // This is not impacted by block separation.
private:        // Another
  int    _a;    // Example
  void  *_p;    // Of comments
  float  _f;
  double _d;
};

#endif

