int __thiscall sub_6F92DAB0(_DWORD *this)
{
  _WORD *v1; // edx@1
  int result; // eax@2
  int (*v3)(void); // edx@3
  int (*v4)(void); // eax@4
  _DWORD *v5; // ebx@7
  _WORD *v6; // edx@8

  v1 = (_WORD *)this[2];
  if ( (unsigned int)v1 >= this[3] )
  {
    v3 = *(int (**)(void))(*this + 40);
    if ( (char *)v3 == (char *)sub_6F92DA70 )
    {
      v4 = *(int (**)(void))(*this + 36);
      if ( (char *)v4 == (char *)sub_6F92DFC0 )
      {
        result = -1;
      }
      else
      {
        v5 = this;
        if ( (unsigned __int16)v4() == -1 )
        {
          result = -1;
        }
        else
        {
          v6 = (_WORD *)v5[2];
          result = *v6;
          v5[2] = v6 + 1;
        }
      }
    }
    else
    {
      result = v3();
    }
  }
  else
  {
    result = *v1;
    this[2] = v1 + 1;
  }
  return result;
}
