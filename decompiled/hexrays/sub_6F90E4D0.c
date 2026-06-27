_DWORD *__thiscall sub_6F90E4D0(int this)
{
  _DWORD *result; // eax@3
  _DWORD *v2; // ebx@4
  int v3; // eax@4

  if ( *(_DWORD *)this )
  {
    if ( *(_BYTE *)(this + 4) )
    {
      v2 = (_DWORD *)this;
      v3 = fclose(*(FILE **)this);
      *v2 = 0;
      if ( v3 )
        result = 0;
      else
        result = v2;
    }
    else
    {
      *(_DWORD *)this = 0;
      result = (_DWORD *)this;
    }
  }
  else
  {
    result = 0;
  }
  return result;
}
