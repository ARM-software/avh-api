const createVm = require('./create-vm')

async function main() {
  console.log('Running create VM example')
  await createVm()
}

main().catch((error) => {
  console.error('Error: ', error)
  process.exit(1)
})