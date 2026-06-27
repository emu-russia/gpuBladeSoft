int __usercall sub_6F8B87E0@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4)
{
  int v4; // edi@1
  int v5; // esi@1
  int v6; // ebx@1
  int v7; // ebp@2
  int v8; // ecx@2
  int v9; // eax@3
  int v10; // eax@5
  int result; // eax@5
  int v12; // [sp+Ch] [bp-20h]@1

  v4 = a2;
  v5 = a1;
  v12 = a3;
  v6 = *(_DWORD *)(a1 + 12) + ~a4;
  while ( 1 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      v9 = (*(_BYTE *)(++v6 - 1) & 0x7F) << v8;
      v8 += 7;
      v7 |= v9;
    }
    while ( *(_BYTE *)(v6 - 1) < 0 );
    if ( !v7 )
      break;
    v10 = sub_6F8B8620(v5, v7);
    result = sub_6F8B86A0(v10, v4, (int **)&v12);
    if ( (_BYTE)result )
      return result;
  }
  return 0;
}
