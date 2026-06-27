int __usercall sub_6F737040@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // ebx@1
  int v4; // esi@2
  int v5; // edi@2
  __int64 v6; // rax@2
  int v7; // eax@3
  int v9; // esi@5
  __int64 v10; // ST00_8@5
  int v11; // eax@5

  v3 = a3;
  if ( !a3 )
    return v3;
  v4 = a1;
  v5 = a2;
  v6 = a3;
  if ( v5 >= 0 )
  {
    v7 = sub_6F8A13E0(v4, __PAIR__(v5, v4), __PAIR__(HIDWORD(v6), a3));
    return v7 + ((unsigned int)(v3 - 2 * (v4 - v7 * v3)) >> 31);
  }
  v9 = -v4;
  LODWORD(v10) = v9;
  HIDWORD(v10) = (unsigned __int64)-__PAIR__(v5, v9) >> 32;
  v11 = sub_6F8A13E0(v9, v10, __PAIR__(HIDWORD(v6), a3));
  return -(v11 + ((unsigned int)(v3 - 2 * (v9 - v11 * v3)) >> 31));
}
