_WORD *__cdecl sub_6F9598C0(_WORD *a1, __int16 a2, char *a3, int a4, char *a5, char *a6)
{
  char *v6; // edx@1
  char *v7; // eax@1
  char v8; // si@1
  unsigned int v9; // ecx@1
  int v10; // ebp@1
  _WORD *v11; // edi@7
  char *v12; // esi@7
  unsigned int v13; // eax@9
  _WORD *result; // eax@9
  _WORD *v15; // ebp@11
  char v16; // bl@11
  char *v17; // esi@12
  _WORD *v18; // edi@12
  int v19; // eax@14
  _WORD *v20; // ebp@16
  char v21; // bl@16
  char *v22; // esi@17
  _WORD *v23; // edi@17
  int v24; // eax@19
  int v25; // [sp+0h] [bp-18h]@1

  v25 = 0;
  v6 = a5;
  v7 = a6;
  v8 = *a3;
  v9 = 0;
  v10 = *a3;
LABEL_2:
  if ( (v7 - a5) >> 1 > v10 )
  {
    while ( (unsigned __int8)(v8 - 1) <= 0x7Du )
    {
      v7 -= 2 * v10;
      if ( a4 - 1 <= v9 )
      {
        ++v25;
        goto LABEL_2;
      }
      v8 = a3[++v9];
      v10 = a3[v9];
      if ( (v7 - a5) >> 1 <= v10 )
        break;
    }
  }
  if ( v7 == a5 )
  {
    result = a1;
  }
  else
  {
    v11 = a1;
    v12 = a5;
    do
    {
      *v11 = *(_WORD *)v12;
      v12 += 2;
      ++v11;
    }
    while ( v7 != v12 );
    v13 = 2 * ((unsigned int)(v7 - a5 - 2) >> 1) + 2;
    v6 = &a5[v13];
    result = (_WORD *)((char *)a1 + v13);
  }
  while ( --v25 != -1 )
  {
    while ( 1 )
    {
      v15 = result + 1;
      *result = a2;
      v16 = a3[v9];
      ++result;
      if ( v16 <= 0 )
        break;
      v17 = v6;
      v18 = v15;
      do
      {
        *v18 = *(_WORD *)v17;
        v17 += 2;
        ++v18;
      }
      while ( v17 != &v6[2 * (unsigned __int8)(v16 - 1) + 2] );
      --v25;
      v19 = 2 * (char)(v16 - 1) + 2;
      v6 += v19;
      result = (_WORD *)((char *)v15 + v19);
      if ( v25 == -1 )
        goto LABEL_15;
    }
  }
LABEL_15:
  while ( --v9 != -1 )
  {
    while ( 1 )
    {
      v20 = result + 1;
      *result = a2;
      v21 = a3[v9];
      ++result;
      if ( v21 <= 0 )
        break;
      v22 = v6;
      v23 = v20;
      do
      {
        *v23 = *(_WORD *)v22;
        v22 += 2;
        ++v23;
      }
      while ( v22 != &v6[2 * (unsigned __int8)(v21 - 1) + 2] );
      --v9;
      v24 = 2 * (char)(v21 - 1) + 2;
      v6 += v24;
      result = (_WORD *)((char *)v20 + v24);
      if ( v9 == -1 )
        return result;
    }
  }
  return result;
}
