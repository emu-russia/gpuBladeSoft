int __usercall sub_6F8B86A0@<eax>(int a1@<eax>, int a2@<edx>, int **a3@<ecx>)
{
  int **v3; // edi@1
  int v4; // esi@1
  int v5; // ebx@1
  int result; // eax@3
  int *v7; // [sp+1Ch] [bp-10h]@1

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v7 = *a3;
  if ( (unsigned __int8)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2) )
    v7 = (int *)*v7;
  result = (*(int (__thiscall **)(int, int, int *, signed int))(*(_DWORD *)v4 + 16))(v4, v5, (int *)&v7, 1);
  if ( (_BYTE)result )
    *v3 = v7;
  return result;
}
