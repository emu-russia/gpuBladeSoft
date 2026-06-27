signed int __cdecl sub_6F8B4920(unsigned int a1, int a2)
{
  LPVOID v2; // eax@1
  _DWORD *v3; // edi@1
  LPVOID v4; // ebx@1
  char *v5; // edx@2
  unsigned int v7; // ebp@4
  char *v8; // eax@4
  DWORD v9; // [sp+14h] [bp-28h]@1
  char *v10; // [sp+18h] [bp-24h]@5
  char *v11; // [sp+1Ch] [bp-20h]@5

  v9 = GetLastError();
  v2 = sub_6F8B3D30();
  v3 = (char *)v2 + 56;
  v4 = v2;
  sub_6F8B35C0((volatile signed __int32 *)v2 + 14);
  if ( *((_DWORD *)v4 + 10) > a1 )
  {
    v5 = (char *)*((_DWORD *)v4 + 11);
LABEL_3:
    *(_DWORD *)&v5[4 * a1] = a2;
    *(_BYTE *)(*((_DWORD *)v4 + 12) + a1) = 1;
    sub_6F8B3600(v3);
    SetLastError(v9);
    return 0;
  }
  v7 = a1 + 1;
  v8 = (char *)realloc(*((void **)v4 + 11), 4 * (a1 + 1));
  if ( v8 )
  {
    v11 = v8;
    v10 = (char *)realloc(*((void **)v4 + 12), a1 + 1);
    if ( v10 )
    {
      memset(&v11[4 * *((_DWORD *)v4 + 10)], 0, 4 * (v7 - *((_DWORD *)v4 + 10)));
      memset(&v10[*((_DWORD *)v4 + 10)], 0, v7 - *((_DWORD *)v4 + 10));
      v5 = v11;
      *((_DWORD *)v4 + 10) = v7;
      *((_DWORD *)v4 + 11) = v11;
      *((_DWORD *)v4 + 12) = v10;
      goto LABEL_3;
    }
  }
  sub_6F8B3600(v3);
  return 12;
}
