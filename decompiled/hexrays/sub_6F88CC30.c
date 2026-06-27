signed int __usercall sub_6F88CC30@<eax>(int a1@<eax>, int a2@<edx>, unsigned int a3@<ecx>, unsigned int *a4)
{
  unsigned int v4; // ebp@1
  int v5; // edi@1
  unsigned int v6; // ebx@1
  int v7; // eax@3
  int *v9; // eax@8
  char *v10; // eax@8
  int v11; // [sp+Ch] [bp-20h]@1

  v4 = a3;
  v5 = a1;
  v6 = 0;
  v11 = a2;
  *a4 = 0;
  while ( 1 )
  {
    v7 = read(*(_DWORD *)(v5 + 16), v11 + v6, v4 - v6);
    if ( v7 <= 0 )
      break;
    v6 = *a4 + v7;
    *a4 = v6;
    if ( v4 <= v6 )
      return 0;
  }
  if ( !v7 )
  {
    *(_DWORD *)(v5 + 52) = 1;
    return 0;
  }
  v9 = _errno();
  v10 = strerror(*v9);
  sub_6F88C430(v5, -1, v10);
  return -1;
}
