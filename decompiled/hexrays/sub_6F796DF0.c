int __usercall sub_6F796DF0@<eax>(unsigned __int8 a1@<dl>, unsigned int a2@<ecx>, int a3, int a4, int a5)
{
  int v5; // ebp@1
  char v6; // al@2
  int v7; // esi@4
  int v8; // edi@4
  int v9; // ebx@4
  int v10; // eax@5
  char v11; // dl@5
  unsigned int v12; // ST1C_4@9
  char v13; // ST1B_1@9
  int result; // eax@13
  int v15; // eax@18
  int v16; // [sp+10h] [bp-2Ch]@1
  int v17; // [sp+14h] [bp-28h]@1
  unsigned __int8 v18; // [sp+1Ah] [bp-22h]@1

  v5 = a3;
  v18 = a1;
  v17 = *(_DWORD *)a4;
  v16 = *(_DWORD *)a5;
  if ( a2 > 1 )
  {
    v6 = 1;
    do
    {
      if ( v18 | (unsigned __int8)v6 )
      {
        v7 = *(_WORD *)(v5 + 2);
        v8 = *(_WORD *)v5 - v7;
        v9 = a5 + 4;
        if ( v16 )
        {
          v10 = v16;
          v11 = 0;
          goto LABEL_8;
        }
        *(_DWORD *)(a5 + 4) = v7;
        *(_DWORD *)(a5 + 8) = v8;
LABEL_17:
        ++v16;
      }
      else
      {
        v7 = *(_WORD *)v5;
        v9 = a4 + 4;
        v10 = v17;
        v8 = *(_WORD *)(v5 + 2) - v7;
        if ( v17 )
        {
          v11 = 1;
          while ( 1 )
          {
LABEL_8:
            if ( *(_DWORD *)v9 > v7 )
            {
              v12 = a2;
              v13 = v11;
              memmove((void *)(v9 + 32), (const void *)v9, 32 * v10);
              v11 = v13;
              a2 = v12;
LABEL_10:
              *(_DWORD *)v9 = v7;
              *(_DWORD *)(v9 + 4) = v8;
              if ( !v11 )
                goto LABEL_17;
              goto LABEL_11;
            }
            if ( *(_DWORD *)v9 == v7 )
              break;
            v9 += 32;
            if ( !--v10 )
              goto LABEL_10;
          }
          v15 = *(_DWORD *)(v9 + 4);
          if ( v8 >= 0 )
          {
            if ( v15 >= v8 )
              goto LABEL_12;
            goto LABEL_20;
          }
          if ( v15 > v8 )
          {
LABEL_20:
            *(_DWORD *)(v9 + 4) = v8;
            goto LABEL_12;
          }
        }
        else
        {
          *(_DWORD *)(a4 + 4) = v7;
          *(_DWORD *)(a4 + 8) = v8;
LABEL_11:
          ++v17;
        }
      }
LABEL_12:
      a2 -= 2;
      v5 += 4;
      v6 = 0;
    }
    while ( a2 > 1 );
  }
  *(_DWORD *)a4 = v17;
  result = a5;
  *(_DWORD *)a5 = v16;
  return result;
}
