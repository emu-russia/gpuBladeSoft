_WORD *__cdecl sub_6F7A0AB0(int a1, char a2, unsigned int a3, _WORD *a4, _WORD *a5)
{
  int v5; // ecx@1
  int v6; // esi@2
  int v7; // edx@2
  unsigned int v8; // ebx@3
  unsigned int v9; // esi@4
  int v10; // edi@4
  unsigned int v11; // eax@5
  _WORD *result; // eax@6
  int v13; // ebp@9
  _WORD *v14; // [sp+1Ch] [bp-20h]@10

  v5 = *(_DWORD *)(a1 + 788);
  if ( a2 )
  {
    v6 = *(_DWORD *)(a1 + 692);
    v7 = a1 + 296;
  }
  else
  {
    v7 = a1 + 216;
    v6 = *(_DWORD *)(a1 + 684);
    v5 = *(_DWORD *)(a1 + 784);
  }
  v8 = *(_WORD *)(v7 + 34);
  if ( !(_WORD)v8 )
    goto LABEL_6;
  v9 = v5 + v6;
  v10 = *(_DWORD *)(a1 + 104);
  if ( v8 > a3 )
  {
    v11 = v5 + 4 * a3;
    if ( v9 >= v11 + 4 )
    {
      v14 = (_WORD *)sub_6F771FF0(v10, v11);
      if ( !v14 )
      {
        *a5 = sub_6F772620(v10, &v14);
        if ( !v14 )
        {
          *a4 = sub_6F772620(v10, &v14);
          result = v14;
          if ( !v14 )
            return result;
        }
      }
    }
LABEL_6:
    *a4 = 0;
    result = a5;
    *a5 = 0;
    return result;
  }
  v13 = v5 + 4 * v8 - 4;
  if ( v9 < v5 + 4 * v8 )
    goto LABEL_6;
  v14 = (_WORD *)sub_6F771FF0(v10, v5 + 4 * v8 - 4);
  if ( v14 )
    goto LABEL_6;
  *a5 = sub_6F772620(v10, &v14);
  if ( v14 )
    goto LABEL_6;
  if ( v9 >= v13 + 2 * (a3 - v8) + 6 )
  {
    result = (_WORD *)sub_6F771FF0(v10, v13 + 2 * (a3 - v8) + 4);
    v14 = result;
    if ( !result )
    {
      result = (_WORD *)sub_6F772620(v10, &v14);
      *a4 = (_WORD)result;
    }
  }
  else
  {
    result = a4;
    *a4 = 0;
  }
  return result;
}
