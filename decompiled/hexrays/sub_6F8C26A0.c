signed int __thiscall sub_6F8C26A0(int this, int a2, unsigned int *a3, unsigned int *a4, unsigned int **a5, int a6, int a7, _DWORD *a8)
{
  int v8; // esi@1
  unsigned int v9; // ebp@1
  unsigned int *v10; // ebx@1
  int v11; // edx@1
  char v12; // al@1
  _WORD *v13; // edx@1
  unsigned int v14; // eax@3
  int v15; // esi@4
  unsigned int v16; // ecx@5
  signed int result; // eax@7
  __int16 v18; // cx@9
  unsigned int v19; // ecx@15
  __int16 v20; // ax@15
  __int16 v21; // cx@15
  int v22; // edx@16
  __int16 v23; // cx@19
  int v24; // [sp+8h] [bp-18h]@1
  int v25; // [sp+Ch] [bp-14h]@1

  v8 = *(_DWORD *)(this + 12);
  v9 = *(_DWORD *)(this + 8);
  v10 = a3;
  v11 = *(_DWORD *)(this + 12);
  v24 = a6;
  v25 = a7;
  v12 = sub_6F90DA60((int)&v24, v11);
  v13 = (_WORD *)v24;
  if ( v12 )
  {
    if ( a3 == a4 )
    {
LABEL_18:
      result = 0;
    }
    else
    {
      v14 = *a3;
      if ( v9 >= *a3 )
      {
        v15 = v8 & 1;
        do
        {
          v16 = v25 - (_DWORD)v13;
          if ( v14 > 0xFFFF )
          {
            if ( v16 <= 3 )
              goto LABEL_7;
            v19 = v14 >> 10;
            v20 = (v14 & 0x3FF) - 9216;
            v21 = v19 - 10304;
            if ( v15 )
            {
              *v13 = v21;
              v22 = v24;
              v24 += 2;
            }
            else
            {
              v23 = __ROL2__(v21, 8);
              v20 = __ROL2__(v20, 8);
              *v13 = v23;
              v22 = v24;
              v24 += 2;
            }
            *(_WORD *)(v22 + 2) = v20;
            ++v10;
            v13 = (_WORD *)(v24 + 2);
            v24 += 2;
            if ( a4 == v10 )
              goto LABEL_18;
          }
          else
          {
            if ( v16 <= 1 )
              goto LABEL_7;
            v18 = __ROL2__(v14, 8);
            if ( !v15 )
              LOWORD(v14) = v18;
            ++v10;
            *v13 = v14;
            v13 = (_WORD *)(v24 + 2);
            v24 += 2;
            if ( a4 == v10 )
              goto LABEL_18;
          }
          v14 = *v10;
        }
        while ( v9 >= *v10 );
      }
      result = 2;
    }
  }
  else
  {
LABEL_7:
    result = 1;
  }
  *a5 = v10;
  *a8 = v13;
  return result;
}
