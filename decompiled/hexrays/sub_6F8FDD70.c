int __thiscall sub_6F8FDD70(int *this, unsigned int a2, __int16 a3)
{
  int *v3; // edx@1
  int v4; // ecx@1
  unsigned int v5; // ebx@1
  int v6; // esi@1
  unsigned int v7; // esi@2
  int *v8; // ST1C_4@3
  int v9; // edx@3
  __int16 *v10; // eax@3
  int result; // eax@6

  v3 = this;
  v4 = *this;
  v5 = a2;
  v6 = *(_DWORD *)(v4 - 12);
  if ( 536870910 - v6 < a2 )
    sub_6F95B240("basic_string::append");
  v7 = a2 + v6;
  if ( v7 > *(_DWORD *)(v4 - 8) || *(_DWORD *)(v4 - 4) > 0 )
  {
    v8 = v3;
    sub_6F8FEB20(v3, v7);
    v9 = *v8;
    v10 = (__int16 *)(*v8 + 2 * *(_DWORD *)(*v8 - 12));
    if ( a2 == 1 )
    {
LABEL_9:
      *v10 = a3;
      goto LABEL_6;
    }
  }
  else
  {
    v9 = *v3;
    v10 = (__int16 *)(v9 + 2 * *(_DWORD *)(v9 - 12));
    if ( a2 == 1 )
      goto LABEL_9;
  }
  if ( a2 )
  {
    do
    {
      *v10 = a3;
      ++v10;
      --v5;
    }
    while ( v5 );
  }
LABEL_6:
  result = 0;
  *(_DWORD *)(v9 - 4) = 0;
  *(_DWORD *)(v9 - 12) = v7;
  *(_WORD *)(v9 + 2 * v7) = 0;
  return result;
}
