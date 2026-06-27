void __cdecl sub_6F8B07F0(void *Memory)
{
  int v1; // eax@4
  bool v2; // zf@4
  int v3; // edx@4

  if ( Memory )
  {
    if ( *((_DWORD *)Memory + 1) <= 9 )
    {
      sub_6F8B05F0(0);
      v1 = *((_DWORD *)Memory + 1);
      v2 = dword_703734E8 == 2;
      v3 = dword_703734C0[v1];
      dword_703734C0[v1] = (int)Memory;
      *(_DWORD *)Memory = v3;
      if ( v2 )
        LeaveCriticalSection(&CriticalSection);
    }
    else
    {
      free(Memory);
    }
  }
}
