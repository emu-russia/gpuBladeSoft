_BYTE *__thiscall sub_6F8C3A90(_WORD *this, _BYTE *a2, _BYTE *a3, int a4)
{
  _BYTE *v4; // edx@1
  _BYTE *result; // eax@1
  int v6; // ebx@1
  int v7; // esi@2

  v4 = a2;
  result = a3;
  v6 = a4;
  if ( a2 < a3 )
  {
    do
    {
      v7 = *v4++;
      v6 += 2;
      *(_WORD *)(v6 - 2) = this[v7 + 71];
    }
    while ( a3 != v4 );
  }
  return result;
}
