int __usercall sub_6F8B6470@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v2; // esi@1
  int v3; // ebx@1
  FILE *v5; // eax@4

  v2 = a2;
  v3 = a1;
  sub_6F8B35C0(&dword_6FB48AE4);
  if ( **(_DWORD **)v3 != -1162743571 || *(_DWORD *)(*(_DWORD *)v3 + 4) <= 0 )
  {
    v5 = (FILE *)off_6FB48ABC(2);
    fprintf(
      v5,
      "Assertion failed: (%s), file %s, line %d\n",
      "(((rwlock_t *)*rwl)->valid == LIFE_RWLOCK) && (((rwlock_t *)*rwl)->busy > 0)",
      "src/rwlock.c",
      40);
    exit(1);
  }
  --*(_DWORD *)(*(_DWORD *)v3 + 4);
  sub_6F8B3600(&dword_6FB48AE4);
  return v2;
}
