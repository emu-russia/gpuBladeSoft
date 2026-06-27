_BYTE *__thiscall sub_6F90E650(_BYTE *this, FILE *a2, int a3)
{
  _BYTE *v3; // ebx@3
  int v4; // ebp@3
  _BYTE *result; // eax@6

  if ( !*(_DWORD *)this && a2 )
  {
    v3 = this;
    v4 = *_errno();
    *_errno() = 0;
    do
    {
      if ( !fflush(a2) )
      {
        *_errno() = v4;
        result = v3;
        *(_DWORD *)v3 = a2;
        v3[4] = 0;
        return result;
      }
    }
    while ( *_errno() == 4 );
    *_errno() = v4;
  }
  return 0;
}
