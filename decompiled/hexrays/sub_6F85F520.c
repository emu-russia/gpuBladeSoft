int __usercall sub_6F85F520@<eax>(int *a1@<eax>, _DWORD *a2@<edx>, const void *a3@<ecx>, const void *a4)
{
  const void *v4; // ebx@1
  void *v5; // eax@1
  unsigned int v6; // ecx@3
  signed int v7; // eax@3
  int v8; // eax@6
  _DWORD *v9; // ST18_4@6
  unsigned int v10; // ST14_4@6
  int result; // eax@7
  _DWORD *v12; // ST18_4@2
  int *v13; // [sp+1Ch] [bp-1Ch]@1

  v13 = a1;
  v4 = a3;
  v5 = (void *)*a2;
  if ( !*a2 )
  {
    v12 = a2;
    v5 = (void *)sub_6F85F484((int)v13);
    a2 = v12;
    *v12 = v5;
  }
  qmemcpy(v5, v4, 0x11u);
  v6 = 0;
  v7 = 1;
  do
    v6 += *((_BYTE *)v4 + v7++);
  while ( v7 != 17 );
  if ( v6 - 1 > 0xFF )
  {
    v8 = *v13;
    *(_DWORD *)(v8 + 20) = 9;
    v9 = a2;
    v10 = v6;
    (*(void (__cdecl **)(int *))v8)(v13);
    v6 = v10;
    a2 = v9;
  }
  qmemcpy((void *)(*a2 + 17), a4, v6);
  result = *a2;
  *(_BYTE *)(*a2 + 273) = 0;
  return result;
}
