signed int __thiscall sub_6F92DA70(_DWORD *this)
{
  int (*v1)(void); // eax@1
  signed int result; // eax@2
  _DWORD *v3; // ebx@3
  _WORD *v4; // edx@4

  v1 = *(int (**)(void))(*this + 36);
  if ( (char *)v1 == (char *)sub_6F92DFC0 )
  {
    result = -1;
  }
  else
  {
    v3 = this;
    if ( (unsigned __int16)v1() == -1 )
    {
      result = -1;
    }
    else
    {
      v4 = (_WORD *)v3[2];
      result = *v4;
      v3[2] = v4 + 1;
    }
  }
  return result;
}
