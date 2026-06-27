__int16 *__thiscall sub_6F93D2A0(_DWORD *this, unsigned int a2, __int16 a3)
{
  _DWORD *v3; // esi@1
  __int16 v4; // di@1
  unsigned int v5; // ebp@1
  __int16 v6; // bx@1
  __int16 *result; // eax@2
  __int16 *v8; // ecx@4
  unsigned int v9; // edx@4

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = a3;
  if ( a2 > 7 )
  {
    result = (__int16 *)sub_6F93F180(&a2, 0);
    *v3 = result;
    v5 = a2;
    v3[2] = a2;
  }
  else
  {
    result = (__int16 *)*this;
  }
  if ( v5 )
  {
    v8 = result;
    v9 = v5;
    if ( v5 == 1 )
    {
      *result = v4;
    }
    else
    {
      do
      {
        *v8 = v6;
        ++v8;
        --v9;
      }
      while ( v9 );
    }
  }
  v3[1] = v5;
  result[v5] = 0;
  return result;
}
