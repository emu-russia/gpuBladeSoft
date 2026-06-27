void __thiscall sub_6F961860(char *this)
{
  char *v1; // ecx@1
  char *v2; // eax@1
  char *v3; // ebx@1

  v1 = &this[*(_DWORD *)(*(_DWORD *)this - 12)];
  v2 = (char *)*((_DWORD *)v1 + 11);
  v3 = v1;
  *(_DWORD *)v1 = off_6FBAFEEC;
  *((_DWORD *)v1 + 17) = off_6FBAFF00;
  *((_DWORD *)v1 + 2) = off_6FBAFC60;
  if ( v2 != v1 + 52 )
    j_free_1(v2);
  *((_DWORD *)v3 + 2) = off_6FBB06B4;
  sub_6F938380((volatile signed __int32 **)v3 + 9);
  *(_DWORD *)v3 = &unk_6FBABBE8;
  *((_DWORD *)v3 + 1) = 0;
  *((_DWORD *)v3 + 17) = off_6FBB0FD0;
  sub_6F956920((_DWORD *)v3 + 17);
}
