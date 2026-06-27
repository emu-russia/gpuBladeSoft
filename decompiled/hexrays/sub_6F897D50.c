int __usercall sub_6F897D50@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // edi@1
  int v4; // ebx@1
  _BYTE *v5; // eax@1
  int *v6; // esi@1
  int v7; // eax@3
  _BYTE *v8; // eax@4
  int v9; // ebp@5
  int v10; // eax@5
  int result; // eax@2
  int v12; // [sp+1Ch] [bp-20h]@1

  v3 = a2;
  v4 = a1;
  v5 = *(_BYTE **)(a1 + 12);
  v12 = 0;
  v6 = &v12;
  if ( *v5 == (_BYTE)a2 )
  {
    *(_DWORD *)(v4 + 12) = v5 + 1;
    result = sub_6F896B60(v4, 46, 0, 0);
  }
  else
  {
    do
    {
      v9 = *(_DWORD *)(v4 + 48);
      *(_DWORD *)(v4 + 48) = 1;
      v10 = sub_6F8976D0(v4, a3);
      *(_DWORD *)(v4 + 48) = v9;
      if ( !v10 )
        return 0;
      v7 = sub_6F896B60(v4, 46, v10, 0);
      *v6 = v7;
      if ( !v7 )
        return 0;
      v6 = (int *)(v7 + 12);
      v8 = *(_BYTE **)(v4 + 12);
      a3 = v3;
    }
    while ( *v8 != (_BYTE)v3 );
    *(_DWORD *)(v4 + 12) = v8 + 1;
    result = v12;
  }
  return result;
}
