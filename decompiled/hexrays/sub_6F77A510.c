unsigned int __usercall sub_6F77A510@<eax>(int a1@<eax>, int a2@<edx>, unsigned int a3@<ecx>, int a4, int a5, int a6, char a7)
{
  unsigned int v7; // esi@1
  int v8; // ebx@1
  _DWORD *v9; // eax@2
  int v10; // esi@5
  int v11; // eax@5
  int v12; // edx@5
  signed int v13; // edi@9
  int v14; // edx@10
  int v15; // eax@10
  int v16; // edx@10
  unsigned int result; // eax@11
  signed __int64 v18; // rax@15

  v7 = a3;
  *(_DWORD *)a1 = 0;
  v8 = a1;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  if ( a3 >= *(_DWORD *)(a2 + 20) )
  {
    v9 = *(_DWORD **)(a2 + 4);
    v7 = 0;
    if ( v9 )
    {
      if ( !*v9 )
        *v9 = 130;
    }
  }
  v10 = *(_DWORD *)(a2 + 28) + *(_DWORD *)(a2 + 8) * v7;
  v11 = *(_DWORD *)(v10 + 8);
  v12 = *(_DWORD *)(v10 + 8) - *(_DWORD *)(v10 + 4);
  if ( v12 == -1376256 )
  {
    if ( a7 )
    {
      *(_DWORD *)v8 = 1;
      v13 = 17;
      goto LABEL_19;
    }
    goto LABEL_14;
  }
  if ( v12 == -1310720 )
  {
    if ( !a7 )
    {
      v11 = *(_DWORD *)(v10 + 4);
      *(_DWORD *)v8 = 2;
      v13 = 18;
      goto LABEL_10;
    }
LABEL_14:
    v15 = *(_DWORD *)(v8 + 8) + a5;
    *(_DWORD *)v8 = 0;
    *(_DWORD *)(v8 + 4) = a3;
    *(_DWORD *)(v8 + 8) = v15;
    *(_DWORD *)(v8 + 16) = a6;
    v16 = a6;
    goto LABEL_15;
  }
  if ( v12 < 0 )
  {
    if ( a7 )
    {
      *(_DWORD *)v8 = 4;
      v13 = 20;
      goto LABEL_19;
    }
    v11 = *(_DWORD *)(v10 + 4);
    *(_DWORD *)v8 = 8;
    v13 = 24;
LABEL_10:
    v14 = *(_DWORD *)(a4 + 188);
    *(_DWORD *)(v8 + 4) = a3;
    v15 = a5 + v11 + 2 * v14;
    v16 = a6;
    *(_DWORD *)(v8 + 16) = a6;
    *(_DWORD *)(v8 + 8) = v15;
    if ( *(_BYTE *)v10 )
    {
      result = *(_DWORD *)(v10 + 16);
LABEL_12:
      *(_DWORD *)v8 = v13;
      *(_DWORD *)(v8 + 12) = result;
      return result;
    }
    goto LABEL_15;
  }
  if ( !a7 )
  {
    *(_DWORD *)v8 = 8;
    v13 = 24;
    goto LABEL_10;
  }
  v11 = *(_DWORD *)(v10 + 4);
  *(_DWORD *)v8 = 4;
  v13 = 20;
LABEL_19:
  v15 = a5 + v11;
  v16 = a6;
  *(_DWORD *)(v8 + 4) = a3;
  *(_DWORD *)(v8 + 16) = a6;
  *(_DWORD *)(v8 + 8) = v15;
  if ( *(_BYTE *)v10 )
  {
    result = *(_DWORD *)(v10 + 12);
    goto LABEL_12;
  }
LABEL_15:
  v18 = (unsigned int)(((signed int)((unsigned __int64)(v16 * (signed __int64)v15) >> 32) >> 31) + 0x8000)
      + v16 * (signed __int64)v15;
  result = (HIDWORD(v18) << 16) + ((unsigned int)v18 >> 16);
  *(_DWORD *)(v8 + 12) = result;
  return result;
}
