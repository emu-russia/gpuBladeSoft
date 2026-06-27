int __cdecl sub_6F807B10(int a1, int a2, int a3)
{
  int result; // eax@3
  int v4; // edx@5
  int v5; // eax@6
  int v6; // esi@9
  int v7; // esi@9
  __int64 v8; // rax@9
  int v9; // ecx@10
  __int64 v10; // rax@10
  unsigned __int64 v11; // rax@14
  signed __int64 v12; // rax@15
  unsigned __int8 v13; // cf@15
  int v14; // esi@15
  bool v15; // zf@20
  int v16; // eax@21
  int v17; // ecx@26
  __int64 v18; // rax@26

  if ( !a1 || !a3 )
    return -1;
  result = *(_DWORD *)(a1 + 51588);
  if ( result == 1 )
  {
    v15 = *(_DWORD *)(a1 + 175112) == 1;
    *(_DWORD *)(a1 + 51588) = 0;
    if ( v15 )
    {
      *(_DWORD *)a3 = 0;
      *(_DWORD *)(a3 + 4) = 0;
      v5 = *(_DWORD *)(a1 + 51600);
      goto LABEL_7;
    }
    v16 = sub_6F833A60(a1 + 51552);
    if ( v16 )
    {
      *(_DWORD *)a3 = v16;
      *(_DWORD *)(a3 + 4) = sub_6F833A20(a1 + 51552);
      v5 = *(_DWORD *)(a1 + 51600);
      goto LABEL_7;
    }
    return -1;
  }
  if ( result )
    return 0;
  v4 = *(_DWORD *)(a1 + 51600);
  if ( v4 )
  {
    v5 = v4 - 1;
    *(_DWORD *)(a1 + 51600) = v4 - 1;
    *(_DWORD *)a3 = 0;
    *(_DWORD *)(a3 + 4) = 0;
LABEL_7:
    if ( a2 )
      a2 = v5 == 0;
    v6 = *(_DWORD *)(a1 + 51604);
    HIDWORD(v8) = 0;
    *(_DWORD *)(a3 + 8) = 0;
    *(_DWORD *)(a3 + 12) = a2;
    v7 = v6 - v5;
    LODWORD(v8) = *(_BYTE *)(a1 + 793);
    if ( *(_BYTE *)(a1 + 792) )
    {
      v9 = *(_DWORD *)(a1 + 60);
      v10 = (*(_QWORD *)(a1 + 768) + v8) << (v9 & 0x1F);
      if ( v9 & 0x20 )
        HIDWORD(v10) = v10;
      if ( v9 & 0x20 )
        LODWORD(v10) = 0;
      v11 = (unsigned int)v7 + *(_QWORD *)(a1 + 776) + v10 - *(_QWORD *)(a1 + 768);
    }
    else
    {
      v17 = *(_DWORD *)(a1 + 60);
      v18 = (*(_QWORD *)(a1 + 776) + v8) << (v17 & 0x1F);
      if ( v17 & 0x20 )
        HIDWORD(v18) = v18;
      if ( v17 & 0x20 )
        LODWORD(v18) = 0;
      v11 = (unsigned int)v7 + v18;
    }
    *(_QWORD *)(a1 + 784) = v11;
    v12 = sub_6F818990(a1, v11);
    v13 = __CFADD__((_DWORD)v12, 3);
    v14 = *(_DWORD *)(a1 + 784);
    *(_DWORD *)(a3 + 24) = v12 + 3;
    LODWORD(v12) = *(_DWORD *)(a1 + 788);
    *(_DWORD *)(a3 + 28) = v13 + HIDWORD(v12);
    *(_DWORD *)(a3 + 16) = v14;
    *(_DWORD *)(a3 + 20) = v12;
    if ( a2 )
      *(_DWORD *)(a1 + 51588) = 0x7FFFFFFF;
    return *(_DWORD *)(a1 + 51600) + 1;
  }
  if ( a2 )
    *(_DWORD *)(a1 + 51588) = 0x7FFFFFFF;
  return result;
}
