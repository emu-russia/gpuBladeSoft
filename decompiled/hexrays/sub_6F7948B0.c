int __cdecl sub_6F7948B0(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  int v4; // eax@1
  int v5; // ebx@1
  int v6; // eax@1
  int v7; // ebx@1
  int v8; // eax@1
  int result; // eax@3
  unsigned int v10; // ebx@6
  unsigned int v11; // eax@6
  char *v12; // esi@7
  int v13; // ebx@12
  int v14; // eax@17
  char *v15; // esi@19
  int v16; // [sp+28h] [bp-1E4h]@6
  int v17; // [sp+2Ch] [bp-1E0h]@6
  int v18; // [sp+34h] [bp-1D8h]@3
  unsigned int v19; // [sp+38h] [bp-1D4h]@6
  int v20; // [sp+3Ch] [bp-1D0h]@3
  int v21; // [sp+40h] [bp-1CCh]@9
  int v22; // [sp+44h] [bp-1C8h]@9
  int v23; // [sp+48h] [bp-1C4h]@9
  int v24; // [sp+4Ch] [bp-1C0h]@1
  int v25; // [sp+50h] [bp-1BCh]@1
  int v26; // [sp+54h] [bp-1B8h]@1
  int v27; // [sp+58h] [bp-1B4h]@1
  int v28; // [sp+5Ch] [bp-1B0h]@1
  int v29; // [sp+60h] [bp-1ACh]@1
  int v30; // [sp+64h] [bp-1A8h]@1
  int v31; // [sp+68h] [bp-1A4h]@1
  int v32; // [sp+6Ch] [bp-1A0h]@1
  char v33; // [sp+70h] [bp-19Ch]@7
  char v34; // [sp+1F0h] [bp-1Ch]@8

  v26 = 2;
  v4 = *(_DWORD *)a2;
  v27 = *(_DWORD *)(a2 + 12);
  v5 = *(_DWORD *)(a2 + 16);
  v24 = v4;
  v6 = *(_DWORD *)(a2 + 4);
  v28 = v5;
  v7 = *(_DWORD *)(a2 + 20);
  v25 = v6;
  v8 = *(_DWORD *)(a2 + 8);
  v29 = v7;
  v30 = *(_DWORD *)(a2 + 24);
  v31 = *(_DWORD *)(a2 + 28);
  v32 = *(_DWORD *)(a2 + 32);
  if ( v8 == 10 || v8 == 7 )
    v26 = 3;
  sub_6F793CA0(a1, (unsigned int)&v18);
  result = 162;
  if ( v20 == 3 )
  {
    v16 = *(_DWORD *)a1;
    v17 = *(_DWORD *)(a1 + 8);
    v10 = v18 + 1;
    v11 = v19;
    *(_DWORD *)a1 = v18 + 1;
    *(_DWORD *)(a1 + 8) = --v11;
    if ( v10 >= v11 )
    {
      v13 = 0;
      *(_DWORD *)a1 = v16;
      *(_DWORD *)(a1 + 8) = v17;
    }
    else
    {
      v12 = &v33;
      do
      {
        sub_6F793CA0(a1, (unsigned int)&v21);
        if ( !v23 )
        {
          v13 = -1431655765 * ((v12 - &v33) >> 2);
          goto LABEL_13;
        }
        if ( v12 < &v34 )
        {
          *(_DWORD *)v12 = v21;
          *((_DWORD *)v12 + 1) = v22;
          *((_DWORD *)v12 + 2) = v23;
        }
        v12 += 12;
      }
      while ( *(_DWORD *)a1 < *(_DWORD *)(a1 + 8) );
      v13 = -1431655765 * ((v12 - &v33) >> 2);
LABEL_13:
      *(_DWORD *)a1 = v16;
      *(_DWORD *)(a1 + 8) = v17;
      if ( v13 < 0 )
        return 162;
      if ( *(_DWORD *)(a2 + 24) < (unsigned int)v13 )
        v13 = *(_DWORD *)(a2 + 24);
    }
    if ( *(_DWORD *)(a2 + 8) != 7 )
    {
      v14 = *(_DWORD *)(a2 + 28);
      if ( v14 )
        *(_BYTE *)(*a3 + v14) = v13;
    }
    v15 = &v33;
    if ( v13 )
    {
      while ( 1 )
      {
        *(_DWORD *)a1 = *(_DWORD *)v15;
        *(_DWORD *)(a1 + 8) = *((_DWORD *)v15 + 1);
        result = sub_6F794320(a1, (int)&v24, (int)a3, a4);
        if ( result )
          break;
        v15 += 12;
        v28 += (unsigned __int8)v29;
        if ( !--v13 )
          goto LABEL_25;
      }
      *(_DWORD *)a1 = v16;
      *(_DWORD *)(a1 + 8) = v17;
    }
    else
    {
LABEL_25:
      result = 0;
      *(_DWORD *)a1 = v16;
      *(_DWORD *)(a1 + 8) = v17;
    }
  }
  return result;
}
